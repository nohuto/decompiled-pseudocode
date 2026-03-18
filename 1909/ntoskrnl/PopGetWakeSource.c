/*
 * XREFs of PopGetWakeSource @ 0x14071F400
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PopGetCurrentWakeInfos @ 0x14015C400 (PopGetCurrentWakeInfos.c)
 *     PopDereferenceWakeInfos @ 0x140168B00 (PopDereferenceWakeInfos.c)
 *     PopCopyWakeSource @ 0x1408A71E0 (PopCopyWakeSource.c)
 *     PopWakeSourceSize @ 0x1408A76DC (PopWakeSourceSize.c)
 */

__int64 __fastcall PopGetWakeSource(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r14
  unsigned __int64 v3; // rsi
  _DWORD *v4; // rdi
  unsigned int CurrentWakeInfos; // eax
  __int64 v6; // rdx
  _QWORD *v7; // r9
  _QWORD *v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned int v11; // edi
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r10
  _QWORD *v16; // r11
  _QWORD *v17; // r8
  _QWORD *v18; // r15
  _DWORD *v19; // r12
  __int64 v20; // rcx
  _DWORD *v21; // r13
  _QWORD *v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // r8
  _DWORD *v25; // rdi
  _QWORD *v26; // r14
  unsigned __int64 v27; // rsi
  __int64 v28; // [rsp+30h] [rbp-68h]
  int v29; // [rsp+A0h] [rbp+8h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  _QWORD *v32; // [rsp+B8h] [rbp+20h] BYREF

  v29 = (int)a1;
  v32 = 0LL;
  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( (_DWORD)v3 && !a1 )
    return 3221225485LL;
  KeWaitForSingleObject(&PopWakeSourceAvailable, Executive, 0, 0, 0LL);
  CurrentWakeInfos = PopGetCurrentWakeInfos(&v32);
  v8 = v32;
  v9 = CurrentWakeInfos;
  v31 = CurrentWakeInfos;
  v10 = (int)(4 * CurrentWakeInfos + 4);
  if ( CurrentWakeInfos )
  {
    v7 = v32;
    v15 = CurrentWakeInfos;
    do
    {
      v6 = *v7;
      v16 = (_QWORD *)(*v7 + 24LL);
      v17 = (_QWORD *)*v16;
      v10 = 4 * *(_DWORD *)(*v7 + 40LL) + 4 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      while ( v17 != v16 )
      {
        v23 = PopWakeSourceSize(v17);
        v17 = (_QWORD *)*v24;
        v10 = v23 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v7;
      --v15;
    }
    while ( v15 );
  }
  if ( v10 <= v3 )
  {
    *v4 = v9;
    v28 = v9;
    v13 = (__int64)&v4[v9 + 1];
    v14 = v9;
    if ( (_DWORD)v9 )
    {
      v18 = v8;
      v19 = v4 + 1;
      do
      {
        v20 = *v18;
        v21 = (_DWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *v21 = *(_DWORD *)(*v18 + 40LL);
        *v19 = ((v13 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
        v13 = (__int64)&v21[*(unsigned int *)(v20 + 40) + 1];
        v22 = *(_QWORD **)(v20 + 24);
        if ( v22 != (_QWORD *)(v20 + 24) )
        {
          v25 = v21 + 1;
          v26 = (_QWORD *)(v20 + 24);
          do
          {
            v27 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            *v25++ = v27 - (_DWORD)v21;
            PopCopyWakeSource(v27, v6, v22, v7);
            v22 = (_QWORD *)*v22;
            v13 = *(unsigned int *)(v27 + 4) + v27;
          }
          while ( v22 != v26 );
          LODWORD(v4) = v29;
          v14 = v28;
        }
        ++v18;
        ++v19;
        v28 = --v14;
      }
      while ( v14 );
      LODWORD(v9) = v31;
      v8 = v32;
    }
    v2 = a2;
    v11 = 0;
  }
  else
  {
    v11 = -1073741789;
  }
  if ( (_DWORD)v9 )
    PopDereferenceWakeInfos(v9, v8);
  *v2 = v10;
  return v11;
}
