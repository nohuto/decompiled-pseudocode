/*
 * XREFs of KiTpHandleTrap @ 0x1402AD550
 * Callers:
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiTpWriteBreakpoint @ 0x1402AD73C (KiTpWriteBreakpoint.c)
 *     KiTpEmulateInstruction @ 0x1402B44F8 (KiTpEmulateInstruction.c)
 */

bool __fastcall KiTpHandleTrap(__int64 a1, __int64 a2, unsigned __int8 a3, char a4)
{
  unsigned __int64 v8; // rdx
  _KPROCESS *Process; // r8
  __int64 *i; // rbx
  char v11; // cl
  _KPROCESS *v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  bool v17; // [rsp+20h] [rbp-58h]
  _QWORD v18[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a3 || (KiDynamicTraceEnabled & 1) == 0) )
    return 0;
  v8 = *(_QWORD *)(a2 + 248);
  Process = KeGetCurrentThread()->Process;
  _InterlockedAdd(&KiTpActiveTrapsCount, 1u);
  for ( i = *(__int64 **)(KiTpHashTable + 8 * ((v8 >> 4) & 0x3FFF)); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v17 = *(_BYTE *)v8 != 0xCC;
      goto LABEL_29;
    }
    if ( v8 == i[1] )
    {
      v11 = *((_BYTE *)i + 50);
      if ( !v11 || Process == (_KPROCESS *)i[2] )
        break;
    }
  }
  if ( !a4 )
  {
    v13 = KiTpWriteBreakpoint(i, 0LL, Process);
    goto LABEL_27;
  }
  v12 = (_KPROCESS *)i[2];
  if ( v12 && !v11 && v12 != Process )
  {
    v18[0] = a1;
    v18[1] = a2;
    v18[2] = a3;
    v13 = KiTpEmulateInstruction((char *)i + 52, v18, Process);
LABEL_27:
    v15 = v13;
LABEL_28:
    v17 = v15 >= 0;
    goto LABEL_29;
  }
  if ( !*((_BYTE *)i + 24) )
    goto LABEL_21;
  v14 = 32LL;
  if ( *((_BYTE *)i + 50) )
    v14 = 48LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _KPROCESS *))((char *)&KiDynamicTraceCallouts + v14))(
          a2,
          i[4],
          Process) )
  {
LABEL_21:
    v19[0] = a1;
    v19[1] = a2;
    v19[2] = a3;
    v15 = KiTpEmulateInstruction((char *)i + 52, v19, Process);
    if ( v15 >= 0 && *((_BYTE *)i + 25) )
    {
      v16 = 40LL;
      if ( *((_BYTE *)i + 50) )
        v16 = 56LL;
      (*(void (__fastcall **)(__int64, __int64))((char *)&KiDynamicTraceCallouts + v16))(a2, i[5]);
    }
    goto LABEL_28;
  }
  v17 = 1;
LABEL_29:
  _InterlockedDecrement(&KiTpActiveTrapsCount);
  return v17;
}
