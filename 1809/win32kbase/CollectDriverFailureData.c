/*
 * XREFs of CollectDriverFailureData @ 0x1C0103FD4
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00EBE5C (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

unsigned __int64 __fastcall CollectDriverFailureData(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  int v6; // ecx
  const wchar_t *v7; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdi
  wchar_t *v11; // rdx
  int v12; // r8d
  __int64 v13; // r11
  __int64 v14; // r9
  _QWORD *v15; // rcx
  wchar_t *v16; // rax
  __int64 v17; // r10
  __int128 v18; // xmm0
  __int16 *v19; // rcx
  __int64 v20; // rsi
  __int16 v21; // r10

  result = (unsigned __int64)ExAllocatePoolWithTag((POOL_TYPE)512, 0x138uLL, 0x73726447u);
  v5 = result;
  if ( result )
  {
    memset((void *)result, 0, 0x138uLL);
    v6 = gbBaseVideo;
    *(_DWORD *)(v5 + 12) = gbDeferredInvalidateDualView;
    *(_DWORD *)v5 = v6;
    *(_QWORD *)(v5 + 304) = a2;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_WORD *)(v5 + 16) = gdmLogPixels;
    *(_DWORD *)(v5 + 20) = gcNextGlobalDeviceNumber;
    *(_DWORD *)(v5 + 24) = gcNextGlobalPhysicalOutputNumber;
    *(_DWORD *)(v5 + 28) = gcNextGlobalVirtualOutputNumber;
    *(_QWORD *)(v5 + 32) = gpGraphicsDeviceList;
    *(_QWORD *)(v5 + 40) = gpGraphicsDeviceListLast;
    *(_DWORD *)(v5 + 48) = gcFailedModeChanges;
    *(_DWORD *)(v5 + 52) = gcRemoteNextGlobalDeviceNumber;
    *(_DWORD *)(v5 + 56) = WPP_MAIN_CB.DeviceLock.Header.SignalState;
    *(_QWORD *)(v5 + 64) = gpRemoteGraphicsDeviceList;
    *(_QWORD *)(v5 + 72) = gpLocalGraphicsDeviceList;
    *(_QWORD *)(v5 + 80) = gpRemoteGraphicsDeviceListLast;
    *(_QWORD *)(v5 + 88) = gpLocalGraphicsDeviceListLast;
    *(_QWORD *)(v5 + 96) = gpRemoteDiscGraphicsDevice;
    *(_QWORD *)(v5 + 104) = gpRemoteMirrorGraphicsDevice;
    *(_QWORD *)(v5 + 112) = gpLocalDiscGraphicsDevice;
    *(_DWORD *)(v5 + 120) = gcLocalNextGlobalPhysicalOutputNumber;
    *(_DWORD *)(v5 + 124) = gcLocalNextGlobalVirtualOutputNumber;
    *(_DWORD *)(v5 + 128) = gcRemoteNextGlobalPhysicalOutputNumber;
    *(_DWORD *)(v5 + 132) = gcRemoteNextGlobalVirtualOutputNumber;
    *(_WORD *)(v5 + 136) = gProtocolType;
    v7 = qword_1C01CE2D8;
    *a1 = v5;
    if ( v7 )
      wcsncpy_s((wchar_t *)(v5 + 138), 0x50uLL, v7, 0xFFFFFFFFFFFFFFFFuLL);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1000uLL, 0x73726447u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1000uLL);
      a1[1] = (unsigned __int64)v9;
    }
    result = (unsigned __int64)ExAllocatePoolWithTag((POOL_TYPE)512, 0x1000uLL, 0x73726447u);
    v10 = result;
    if ( result )
    {
      result = (unsigned __int64)memset((void *)result, 0, 0x1000uLL);
      a1[2] = v10;
    }
    v11 = gpGraphicsDeviceList;
    v12 = 0;
    if ( gpGraphicsDeviceList )
    {
      v13 = 0LL;
      v14 = 0LL;
      do
      {
        if ( v14 >= 512 )
          break;
        v15 = v9;
        v16 = v11;
        v17 = 2LL;
        do
        {
          v18 = *(_OWORD *)v16;
          v16 += 64;
          *(_OWORD *)v15 = v18;
          v15 += 16;
          *((_OWORD *)v15 - 7) = *((_OWORD *)v16 - 7);
          *((_OWORD *)v15 - 6) = *((_OWORD *)v16 - 6);
          *((_OWORD *)v15 - 5) = *((_OWORD *)v16 - 5);
          *((_OWORD *)v15 - 4) = *((_OWORD *)v16 - 4);
          *((_OWORD *)v15 - 3) = *((_OWORD *)v16 - 3);
          *((_OWORD *)v15 - 2) = *((_OWORD *)v16 - 2);
          *((_OWORD *)v15 - 1) = *((_OWORD *)v16 - 1);
          --v17;
        }
        while ( v17 );
        *(_OWORD *)v15 = *(_OWORD *)v16;
        *((_OWORD *)v15 + 1) = *((_OWORD *)v16 + 1);
        *((_OWORD *)v15 + 2) = *((_OWORD *)v16 + 2);
        result = *((_QWORD *)v16 + 6);
        v15[6] = result;
        if ( v10 )
        {
          if ( v12 < 4096 )
          {
            v19 = (__int16 *)*((_QWORD *)v11 + 25);
            if ( v19 )
            {
              v20 = v12;
              v21 = 32;
              for ( result = v12 + 2LL; result < 0x1000; result = v12 + 2LL )
              {
                v12 += 2;
                *(_WORD *)(v13 + v10) = *v19;
                v13 += 2LL;
                result = (unsigned __int16)*v19;
                if ( !(_WORD)result && !v21 )
                  break;
                v21 = *v19++;
              }
              if ( v19 != *((__int16 **)v11 + 25) )
              {
                result = v10 + 2 * v20;
                v9[25] = result;
              }
            }
          }
        }
        v11 = (wchar_t *)*((_QWORD *)v11 + 16);
        ++v14;
        v9 += 39;
      }
      while ( v11 );
    }
  }
  return result;
}
