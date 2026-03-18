/*
 * XREFs of RIMGetDevicePropertiesLockfree @ 0x1C00E2200
 * Callers:
 *     NtRIMGetDevicePropertiesLockfree @ 0x1C00DF670 (NtRIMGetDevicePropertiesLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C00E20D0 (RIMGetDeviceProperties.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimCopyInstancePathFromRimDev @ 0x1C00DEFC8 (rimCopyInstancePathFromRimDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetDevicePropertiesLockfree(__int64 a1, ULONG64 a2, int a3)
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
  unsigned int v14; // r8d
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  ULONG64 v17; // rdx
  _DWORD *v18; // rcx
  ULONG64 v19; // rcx
  __int64 v20; // rax
  int v21; // r9d
  _DWORD *v22; // rcx
  _WORD *v23; // rcx
  _WORD *v24; // rcx
  _WORD *v25; // rcx
  _QWORD *v26; // rcx
  _DWORD *v27; // rdx
  __int64 v29; // [rsp+20h] [rbp-68h]
  PVOID Object[12]; // [rsp+28h] [rbp-60h] BYREF

  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3LL, 1LL, Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object[0];
    if ( Object[0] )
      v6 = (char *)Object[0] + 80;
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
          v14 = (*((_DWORD *)v6 + 46) & 0x2000u) >> 13;
          if ( a3 )
          {
            v15 = (_DWORD *)a2;
            if ( a2 >= MmUserProbeAddress )
              v15 = (_DWORD *)MmUserProbeAddress;
            *v15 = 1;
            v16 = (_DWORD *)(a2 + 4);
            if ( a2 + 4 >= MmUserProbeAddress )
              v16 = (_DWORD *)MmUserProbeAddress;
            *v16 = v14;
            v17 = a2 + 8;
            if ( a2 + 8 >= MmUserProbeAddress )
              v17 = MmUserProbeAddress;
            *(_OWORD *)v17 = *((_OWORD *)v6 + 29);
            *(_QWORD *)(v17 + 16) = *((_QWORD *)v6 + 60);
            *(_DWORD *)(v17 + 24) = *((_DWORD *)v6 + 122);
          }
          else
          {
            *(_DWORD *)a2 = 1;
            *(_DWORD *)(a2 + 4) = v14;
            *(_OWORD *)(a2 + 8) = *((_OWORD *)v6 + 29);
            *(_QWORD *)(a2 + 24) = *((_QWORD *)v6 + 60);
            *(_DWORD *)(a2 + 32) = *((_DWORD *)v6 + 122);
          }
        }
        else if ( v13 )
        {
          if ( v13 == 2 )
          {
            v20 = 0LL;
            v29 = 0LL;
            v21 = 0;
            if ( *((_DWORD *)v6 + 212) )
            {
              v20 = *(_QWORD *)(v6 + 1380);
              v29 = v20;
              v21 = *((_DWORD *)v6 + 347);
            }
            if ( a3 )
            {
              v22 = (_DWORD *)a2;
              if ( a2 >= MmUserProbeAddress )
                v22 = (_DWORD *)MmUserProbeAddress;
              *v22 = 3;
              v23 = (_WORD *)(a2 + 8);
              if ( a2 + 8 >= MmUserProbeAddress )
                v23 = (_WORD *)MmUserProbeAddress;
              *v23 = *(_WORD *)(*((_QWORD *)v6 + 58) + 110LL);
              v24 = (_WORD *)(a2 + 10);
              if ( a2 + 10 >= MmUserProbeAddress )
                v24 = (_WORD *)MmUserProbeAddress;
              *v24 = *(_WORD *)(*((_QWORD *)v6 + 58) + 112LL);
              v25 = (_WORD *)(a2 + 12);
              if ( a2 + 12 >= MmUserProbeAddress )
                v25 = (_WORD *)MmUserProbeAddress;
              *v25 = *(_WORD *)(*((_QWORD *)v6 + 58) + 114LL);
              v26 = (_QWORD *)(a2 + 16);
              if ( a2 + 16 >= MmUserProbeAddress )
                v26 = (_QWORD *)MmUserProbeAddress;
              *v26 = v29;
              v27 = (_DWORD *)(a2 + 24);
              if ( a2 + 24 >= MmUserProbeAddress )
                v27 = (_DWORD *)MmUserProbeAddress;
              *v27 = v21;
            }
            else
            {
              *(_DWORD *)a2 = 3;
              *(_WORD *)(a2 + 8) = *(_WORD *)(*((_QWORD *)v6 + 58) + 110LL);
              *(_WORD *)(a2 + 10) = *(_WORD *)(*((_QWORD *)v6 + 58) + 112LL);
              *(_WORD *)(a2 + 12) = *(_WORD *)(*((_QWORD *)v6 + 58) + 114LL);
              *(_QWORD *)(a2 + 16) = v20;
              *(_DWORD *)(a2 + 24) = v21;
            }
          }
        }
        else if ( a3 )
        {
          v18 = (_DWORD *)a2;
          if ( a2 >= MmUserProbeAddress )
            v18 = (_DWORD *)MmUserProbeAddress;
          *v18 = 2;
          v19 = a2 + 8;
          if ( a2 + 8 >= MmUserProbeAddress )
            v19 = MmUserProbeAddress;
          *(_QWORD *)v19 = *((_QWORD *)v6 + 58);
          *(_DWORD *)(v19 + 8) = *((_DWORD *)v6 + 118);
        }
        else
        {
          *(_DWORD *)a2 = 2;
          *(_QWORD *)(a2 + 8) = *((_QWORD *)v6 + 58);
          *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 118);
        }
        goto LABEL_61;
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
          goto LABEL_61;
        }
        if ( LODWORD(Object[2]) >= v9 && v9 > 2 )
        {
          ProbeForWrite(Object[3], LODWORD(Object[2]), 4u);
          rimCopyInstancePathFromRimDev(v11, (__int64)v6, v9);
          goto LABEL_61;
        }
      }
      else
      {
        v10 = *(_WORD **)(a2 + 16);
        if ( !v10 )
        {
          *(_DWORD *)(a2 + 8) = v9;
LABEL_61:
          ObfDereferenceObject(Object[0]);
          return (unsigned int)v5;
        }
        if ( *(_DWORD *)(a2 + 8) >= v9 && v9 > 2 )
        {
          rimCopyInstancePathFromRimDev(v10, (__int64)v6, v9);
          goto LABEL_61;
        }
      }
    }
    v5 = -1073741811;
    goto LABEL_61;
  }
  return (unsigned int)v5;
}
