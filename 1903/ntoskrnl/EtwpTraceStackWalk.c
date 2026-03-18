/*
 * XREFs of EtwpTraceStackWalk @ 0x14032D3E4
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x14032D1BC (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkApc @ 0x14032D310 (EtwpStackWalkApc.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140017230 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x14001B7E0 (KeQueryCurrentStackInformation.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1401C4200 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     EtwpGetStackLookasideListEntry @ 0x14032CED0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceStackKey @ 0x140334608 (EtwpTraceStackKey.c)
 *     PsPicoWalkUserStack @ 0x1408CA3F0 (PsPicoWalkUserStack.c)
 */

void __fastcall EtwpTraceStackWalk(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  int v6; // ecx
  int v7; // r15d
  PSLIST_ENTRY StackLookasideListEntry; // rbx
  int v9; // r8d
  void *v10; // rsp
  ULONG v11; // edi
  ULONG v12; // r14d
  unsigned int v13; // r12d
  ULONG v14; // r8d
  ULONG v15; // edi
  PVOID *v16; // rcx
  unsigned int v17; // r12d
  ULONG v18; // r14d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  bool v21; // zf
  unsigned int v22; // r8d
  __int64 v23; // rdx
  char v24; // [rsp+10h] [rbp-600h] BYREF
  unsigned int v25; // [rsp+610h] [rbp+0h] BYREF
  __int64 v26; // [rsp+618h] [rbp+8h] BYREF
  __int64 v27; // [rsp+620h] [rbp+10h]
  __int64 v28; // [rsp+628h] [rbp+18h]
  __int64 v29; // [rsp+630h] [rbp+20h] BYREF
  __int64 v30; // [rsp+638h] [rbp+28h]
  __int64 *v31; // [rsp+640h] [rbp+30h]
  _BYTE v32[8]; // [rsp+648h] [rbp+38h] BYREF
  _QWORD v33[3]; // [rsp+650h] [rbp+40h] BYREF
  int v34; // [rsp+668h] [rbp+58h]
  int v35; // [rsp+66Ch] [rbp+5Ch]

  v30 = a3;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v31 = a4;
  if ( (unsigned __int8)KeQueryCurrentStackInformation((__int64)&v25, (__int64)&v29, (__int64)v32) )
  {
    if ( v25 > 9 || (v6 = 929, !_bittest(&v6, v25)) )
    {
      v7 = 256;
      StackLookasideListEntry = EtwpGetStackLookasideListEntry();
      if ( !StackLookasideListEntry )
      {
        if ( (unsigned __int64)&KeGetCurrentStackPointer()[-v29] <= 0x1438 )
          return;
        v10 = alloca(1536LL);
        StackLookasideListEntry = (PSLIST_ENTRY)&v24;
        v7 = 192;
      }
      v11 = 0;
      v12 = 0;
      if ( (a2 & 0x800) != 0 )
      {
        v13 = (a2 >> 20) & 0xF;
        v14 = (v13 << 8) | 2;
        if ( (a2 & 0x2000000) == 0 )
          v14 = ((a2 >> 20) & 0xF) << 8;
        v15 = RtlWalkFrameChain((PVOID *)&StackLookasideListEntry->Next, v13 + v7, v14);
        if ( v15 > v13 )
          v11 = v15 - v13;
        else
          v11 = 0;
      }
      if ( (a2 & 0x1000) != 0 )
      {
        v16 = (PVOID *)(&StackLookasideListEntry->Next + v11);
        if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[13] )
        {
          v12 = PsPicoWalkUserStack(v16, v7 - v11);
        }
        else
        {
          v17 = HIWORD(a2) & 0xF;
          v18 = RtlWalkFrameChain(v16, v7 + v17 - v11, (v17 << 8) | 1);
          if ( v18 > v17 )
            v12 = v18 - v17;
          else
            v12 = 0;
        }
      }
      v19 = v11 + v12;
      if ( v19 )
      {
        v20 = a2 & 0xFFFFE600 | 2;
        v33[1] = 16LL;
        v21 = (*(_DWORD *)(a1 + 832) & 0x1000000) == 0;
        LODWORD(v27) = *(_DWORD *)(v30 + 1608);
        HIDWORD(v27) = *(_DWORD *)(v30 + 1616);
        v26 = *v31;
        v33[0] = &v26;
        if ( v21
          || v19 < 4
          || (LOWORD(v9) = 6182 - (v11 != 0),
              !(unsigned __int8)EtwpTraceStackKey(a1, v20, v9, (unsigned int)v33, (__int64)StackLookasideListEntry, v19)) )
        {
          v22 = *(_DWORD *)a1;
          v23 = *(_QWORD *)(a1 + 1112);
          v34 = 8 * v19;
          v33[2] = StackLookasideListEntry;
          v35 = 0;
          EtwpLogKernelEvent((__int64)v33, v23, v22, 2u, 0x1820u, v20);
        }
      }
      if ( v7 == 256 )
        RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, StackLookasideListEntry - 1);
    }
  }
}
