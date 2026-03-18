/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x1405C5838
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140693B2C (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterProvider @ 0x14071A39C (EtwpRegisterProvider.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FCE40 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r11
  unsigned __int8 v5; // al
  int v6; // ebx
  __int64 v7; // r15
  unsigned __int8 v8; // di
  unsigned __int8 v9; // bp
  __int64 v10; // r14
  unsigned int v11; // r9d
  _QWORD *v12; // r10
  int v13; // esi
  unsigned __int8 v14; // cl
  unsigned int v15; // r10d
  char *v16; // r9
  unsigned __int8 v17; // cl
  __int64 result; // rax
  unsigned int v19; // r9d
  int v20; // r10d
  _QWORD *v21; // r8
  unsigned __int8 v22; // cl
  unsigned int v23; // r9d
  int v24; // r10d
  char *v25; // r8
  unsigned __int8 v26; // cl

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_BYTE *)(a1 + 100);
  LOBYTE(v6) = *(_BYTE *)(a1 + 101);
  v7 = *(_QWORD *)(v2 + 400);
  v8 = *(_BYTE *)(a1 + 102);
  v9 = *(_BYTE *)(a1 + 103);
  if ( v4 )
    v10 = *(_QWORD *)(v4 + 400);
  else
    v10 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v11 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = -1LL;
  v12 = (_QWORD *)(v2 + 144);
  v13 = v5;
  do
  {
    if ( _bittest(&v13, (unsigned __int8)v11) )
    {
      v14 = *(_BYTE *)(a2 + 4);
      *(_DWORD *)a2 = 1;
      if ( v14 <= *((_BYTE *)v12 - 12) )
        v14 = *((_BYTE *)v12 - 12);
      *(_BYTE *)(a2 + 4) = v14;
      *(_QWORD *)(a2 + 16) |= *v12;
      *(_QWORD *)(a2 + 24) &= v12[1];
      *(_DWORD *)(a2 + 8) |= *((_DWORD *)v12 - 2);
    }
    ++v11;
    v12 += 4;
  }
  while ( v11 < 8 );
  if ( (_BYTE)v6 )
  {
    v15 = 0;
    v6 = (unsigned __int8)v6;
    v16 = (char *)(v4 + 132);
    do
    {
      if ( _bittest(&v6, (unsigned __int8)v15) && *((_DWORD *)v16 - 1) )
      {
        v17 = *(_BYTE *)(a2 + 4);
        *(_DWORD *)a2 = 1;
        if ( v17 <= (unsigned __int8)*v16 )
          v17 = *v16;
        *(_BYTE *)(a2 + 4) = v17;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v16 + 12);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v16 + 20);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v16 + 1);
      }
      ++v15;
      v16 += 32;
    }
    while ( v15 < 8 );
  }
  result = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(result + 400) )
  {
    if ( v8 )
    {
      v19 = 0;
      v20 = v8;
      v21 = (_QWORD *)(v7 + 144);
      do
      {
        result = (unsigned __int8)v19;
        if ( _bittest(&v20, (unsigned __int8)v19) )
        {
          v22 = *(_BYTE *)(a2 + 4);
          *(_DWORD *)a2 = 1;
          if ( v22 <= *((_BYTE *)v21 - 12) )
            v22 = *((_BYTE *)v21 - 12);
          *(_BYTE *)(a2 + 4) = v22;
          *(_QWORD *)(a2 + 16) |= *v21;
          *(_QWORD *)(a2 + 24) &= v21[1];
          result = *((unsigned int *)v21 - 2);
          *(_DWORD *)(a2 + 8) |= result;
        }
        ++v19;
        v21 += 4;
      }
      while ( v19 < 8 );
    }
    if ( v9 )
    {
      v23 = 0;
      v24 = v9;
      v25 = (char *)(v10 + 132);
      do
      {
        result = (unsigned __int8)v23;
        if ( _bittest(&v24, (unsigned __int8)v23) && *((_DWORD *)v25 - 1) )
        {
          v26 = *(_BYTE *)(a2 + 4);
          *(_DWORD *)a2 = 1;
          if ( v26 <= (unsigned __int8)*v25 )
            v26 = *v25;
          *(_BYTE *)(a2 + 4) = v26;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v25 + 12);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v25 + 20);
          result = *((unsigned int *)v25 + 1);
          *(_DWORD *)(a2 + 8) |= result;
        }
        ++v23;
        v25 += 32;
      }
      while ( v23 < 8 );
    }
  }
  return result;
}
