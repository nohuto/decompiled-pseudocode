/*
 * XREFs of RIMGetDevicePropertiesLockfree @ 0x1C0136630
 * Callers:
 *     NtRIMGetDevicePropertiesLockfree @ 0x1C01341D0 (NtRIMGetDevicePropertiesLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C01364D0 (RIMGetDeviceProperties.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimCopyInstancePathFromRimDev @ 0x1C0133884 (rimCopyInstancePathFromRimDev.c)
 */

__int64 __fastcall RIMGetDevicePropertiesLockfree(char *a1, ULONG64 a2, int a3)
{
  int v5; // esi
  char *v6; // rdi
  int v7; // r14d
  ULONG64 v8; // rax
  unsigned int v9; // r14d
  _WORD *v10; // rcx
  _WORD *v11; // r15
  _DWORD *v12; // rdx
  char v13; // al
  _DWORD *v14; // rcx
  ULONG64 v15; // rcx
  _DWORD *v16; // rcx
  ULONG64 v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  _DWORD *v20; // rcx
  _WORD *v21; // rcx
  _WORD *v22; // rcx
  _WORD *v23; // rcx
  _QWORD *v24; // rcx
  _DWORD *v25; // rdx
  PVOID Object[12]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object[0];
    if ( Object[0] )
      v6 = (char *)Object[0] + 88;
    if ( *((_QWORD *)v6 + 28) )
    {
      memset(&Object[1], 0, 0x28uLL);
      if ( a3 )
      {
        v8 = a2;
        if ( a2 >= MmUserProbeAddress )
          v8 = MmUserProbeAddress;
        *(_OWORD *)&Object[1] = *(_OWORD *)v8;
        *(_OWORD *)&Object[3] = *(_OWORD *)(v8 + 16);
        Object[5] = *(PVOID *)(v8 + 32);
        v7 = (int)Object[1];
      }
      else
      {
        v7 = *(_DWORD *)a2;
      }
      if ( v7 != 4 )
      {
        v13 = v6[48];
        if ( v13 == 1 )
        {
          if ( a3 )
          {
            v14 = (_DWORD *)a2;
            if ( a2 >= MmUserProbeAddress )
              v14 = (_DWORD *)MmUserProbeAddress;
            *v14 = 1;
            v15 = a2 + 8;
            if ( a2 + 8 >= MmUserProbeAddress )
              v15 = MmUserProbeAddress;
            *(_OWORD *)v15 = *((_OWORD *)v6 + 29);
            *(_QWORD *)(v15 + 16) = *((_QWORD *)v6 + 60);
            *(_DWORD *)(v15 + 24) = *((_DWORD *)v6 + 122);
          }
          else
          {
            *(_DWORD *)a2 = 1;
            *(_OWORD *)(a2 + 8) = *((_OWORD *)v6 + 29);
            *(_QWORD *)(a2 + 24) = *((_QWORD *)v6 + 60);
            *(_DWORD *)(a2 + 32) = *((_DWORD *)v6 + 122);
          }
        }
        else if ( v13 )
        {
          if ( v13 == 2 )
          {
            v18 = 0LL;
            v28 = 0LL;
            v19 = 0;
            if ( *((_DWORD *)v6 + 334) )
            {
              v18 = *(_QWORD *)(v6 + 1868);
              v28 = v18;
              v19 = *((_DWORD *)v6 + 470);
            }
            if ( a3 )
            {
              v20 = (_DWORD *)a2;
              if ( a2 >= MmUserProbeAddress )
                v20 = (_DWORD *)MmUserProbeAddress;
              *v20 = 3;
              v21 = (_WORD *)(a2 + 8);
              if ( a2 + 8 >= MmUserProbeAddress )
                v21 = (_WORD *)MmUserProbeAddress;
              *v21 = *(_WORD *)(*((_QWORD *)v6 + 58) + 110LL);
              v22 = (_WORD *)(a2 + 10);
              if ( a2 + 10 >= MmUserProbeAddress )
                v22 = (_WORD *)MmUserProbeAddress;
              *v22 = *(_WORD *)(*((_QWORD *)v6 + 58) + 112LL);
              v23 = (_WORD *)(a2 + 12);
              if ( a2 + 12 >= MmUserProbeAddress )
                v23 = (_WORD *)MmUserProbeAddress;
              *v23 = *(_WORD *)(*((_QWORD *)v6 + 58) + 114LL);
              v24 = (_QWORD *)(a2 + 16);
              if ( a2 + 16 >= MmUserProbeAddress )
                v24 = (_QWORD *)MmUserProbeAddress;
              *v24 = v28;
              v25 = (_DWORD *)(a2 + 24);
              if ( a2 + 24 >= MmUserProbeAddress )
                v25 = (_DWORD *)MmUserProbeAddress;
              *v25 = v19;
            }
            else
            {
              *(_DWORD *)a2 = 3;
              *(_WORD *)(a2 + 8) = *(_WORD *)(*((_QWORD *)v6 + 58) + 110LL);
              *(_WORD *)(a2 + 10) = *(_WORD *)(*((_QWORD *)v6 + 58) + 112LL);
              *(_WORD *)(a2 + 12) = *(_WORD *)(*((_QWORD *)v6 + 58) + 114LL);
              *(_QWORD *)(a2 + 16) = v18;
              *(_DWORD *)(a2 + 24) = v19;
            }
          }
        }
        else if ( a3 )
        {
          v16 = (_DWORD *)a2;
          if ( a2 >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = 2;
          v17 = a2 + 8;
          if ( a2 + 8 >= MmUserProbeAddress )
            v17 = MmUserProbeAddress;
          *(_QWORD *)v17 = *((_QWORD *)v6 + 58);
          *(_DWORD *)(v17 + 8) = *((_DWORD *)v6 + 118);
        }
        else
        {
          *(_DWORD *)a2 = 2;
          *(_QWORD *)(a2 + 8) = *((_QWORD *)v6 + 58);
          *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 118);
        }
        goto LABEL_59;
      }
      v9 = (*((unsigned __int16 *)v6 + 104) >> 1) + 1;
      if ( a3 )
      {
        v11 = Object[3];
        if ( !Object[3] )
        {
          v12 = (_DWORD *)(a2 + 8);
          if ( a2 + 8 >= MmUserProbeAddress )
            v12 = (_DWORD *)MmUserProbeAddress;
          *v12 = v9;
          goto LABEL_59;
        }
        if ( LODWORD(Object[2]) >= v9 && v9 > 2 )
        {
          ProbeForWrite(Object[3], LODWORD(Object[2]), 4u);
          rimCopyInstancePathFromRimDev(v11, (__int64)v6, v9);
          goto LABEL_59;
        }
      }
      else
      {
        v10 = *(_WORD **)(a2 + 16);
        if ( !v10 )
        {
          *(_DWORD *)(a2 + 8) = v9;
LABEL_59:
          ObfDereferenceObject(Object[0]);
          return (unsigned int)v5;
        }
        if ( *(_DWORD *)(a2 + 8) >= v9 && v9 > 2 )
        {
          rimCopyInstancePathFromRimDev(v10, (__int64)v6, v9);
          goto LABEL_59;
        }
      }
    }
    v5 = -1073741811;
    goto LABEL_59;
  }
  return (unsigned int)v5;
}
