/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x1405C639C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C5D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140658BC8 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C18E0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r14
  unsigned __int8 v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // r8
  int v11; // r9d
  unsigned int i; // edx
  unsigned __int8 v13; // cl
  unsigned int v14; // r8d
  int v15; // r9d
  char *v16; // rdx
  unsigned __int8 v17; // cl
  __int64 v18; // rax
  unsigned int v19; // r8d
  _QWORD *v20; // rdx
  int v21; // r9d
  unsigned __int8 v22; // cl
  unsigned int v23; // r8d
  int v24; // r9d
  char *v25; // rdx
  unsigned __int8 v26; // cl
  unsigned __int8 v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+68h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 100);
  v7 = *(_BYTE *)(a1 + 101);
  v8 = *(_BYTE *)(a1 + 102);
  v28 = *(_BYTE *)(a1 + 103);
  v29 = *(_QWORD *)(v3 + 400);
  if ( v5 )
    v9 = *(_QWORD *)(v5 + 400);
  else
    v9 = 0LL;
  memset(a2, 0, 0x20uLL);
  *((_QWORD *)a2 + 3) = -1LL;
  v10 = (_QWORD *)(v3 + 144);
  v11 = v6;
  for ( i = 0; i < 8; ++i )
  {
    if ( _bittest(&v11, (unsigned __int8)i) )
    {
      v13 = a2[4];
      *(_DWORD *)a2 = 1;
      if ( v13 <= *((_BYTE *)v10 - 12) )
        v13 = *((_BYTE *)v10 - 12);
      a2[4] = v13;
      *((_QWORD *)a2 + 2) |= *v10;
      *((_QWORD *)a2 + 3) &= v10[1];
      *((_DWORD *)a2 + 2) |= *((_DWORD *)v10 - 2);
    }
    v10 += 4;
  }
  if ( v7 )
  {
    v14 = 0;
    v15 = v7;
    v16 = (char *)(v5 + 132);
    do
    {
      if ( _bittest(&v15, (unsigned __int8)v14) && *((_DWORD *)v16 - 1) )
      {
        v17 = a2[4];
        *(_DWORD *)a2 = 1;
        if ( v17 <= (unsigned __int8)*v16 )
          v17 = *v16;
        a2[4] = v17;
        *((_QWORD *)a2 + 2) |= *(_QWORD *)(v16 + 12);
        *((_QWORD *)a2 + 3) &= *(_QWORD *)(v16 + 20);
        *((_DWORD *)a2 + 2) |= *((_DWORD *)v16 + 1);
      }
      ++v14;
      v16 += 32;
    }
    while ( v14 < 8 );
  }
  v18 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v18 + 400) )
  {
    if ( v8 )
    {
      v19 = 0;
      v20 = (_QWORD *)(v29 + 144);
      v21 = v8;
      do
      {
        if ( _bittest(&v21, (unsigned __int8)v19) )
        {
          v22 = a2[4];
          *(_DWORD *)a2 = 1;
          if ( v22 <= *((_BYTE *)v20 - 12) )
            v22 = *((_BYTE *)v20 - 12);
          a2[4] = v22;
          *((_QWORD *)a2 + 2) |= *v20;
          *((_QWORD *)a2 + 3) &= v20[1];
          *((_DWORD *)a2 + 2) |= *((_DWORD *)v20 - 2);
        }
        ++v19;
        v20 += 4;
      }
      while ( v19 < 8 );
    }
    LOBYTE(v18) = v28;
    if ( v28 )
    {
      v23 = 0;
      v24 = v28;
      v25 = (char *)(v9 + 132);
      do
      {
        LOBYTE(v18) = v23;
        if ( _bittest(&v24, (unsigned __int8)v23) && *((_DWORD *)v25 - 1) )
        {
          v26 = a2[4];
          *(_DWORD *)a2 = 1;
          if ( v26 <= (unsigned __int8)*v25 )
            v26 = *v25;
          a2[4] = v26;
          *((_QWORD *)a2 + 2) |= *(_QWORD *)(v25 + 12);
          *((_QWORD *)a2 + 3) &= *(_QWORD *)(v25 + 20);
          LODWORD(v18) = *((_DWORD *)v25 + 1);
          *((_DWORD *)a2 + 2) |= v18;
        }
        ++v23;
        v25 += 32;
      }
      while ( v23 < 8 );
    }
  }
  return v18;
}
