/*
 * XREFs of ndisOidPreTimestampCapability @ 0x1C0013FB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreTimestampCapability(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  char v4; // bl
  int v6; // ebx
  KIRQL v7; // r12
  _WORD *v8; // rbp
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  size_t v11; // r8
  unsigned __int16 v12; // ax

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(260LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3);
  if ( *(_DWORD *)(v3 + 4) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( *a1 )
  {
    v6 = 54;
    if ( *(_DWORD *)(v3 + 48) < 0x36u )
    {
      *(_DWORD *)(v3 + 56) = 54;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1864) = 2314029;
      if ( *(_DWORD *)(v3 + 32) == 10485761 )
      {
        v8 = *(_WORD **)(v1 + 5832);
        if ( !v8 )
        {
          *((_DWORD *)a1 + 10) = -1073741637;
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1864) = 0;
          v4 = 1;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
          if ( (unsigned __int8)byte_1C00A025A < 4u )
            return v4;
          v9 = 261LL;
          goto LABEL_16;
        }
      }
      else
      {
        v8 = *(_WORD **)(v1 + 5840);
        if ( !v8 )
        {
          *((_DWORD *)a1 + 10) = -1073741637;
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1864) = 0;
          v4 = 1;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
          if ( (unsigned __int8)byte_1C00A025A < 4u )
            return v4;
          v9 = 262LL;
LABEL_16:
          WPP_SF_qq(v9, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3);
          return v4;
        }
      }
      v10 = v8[1];
      v11 = v10;
      if ( v10 >= 0x36u )
        v11 = 54LL;
      memmove(*(void **)(v3 + 40), v8, v11);
      v12 = v8[1];
      if ( v12 < 0x36u )
        v6 = v12;
      *(_DWORD *)(v3 + 52) = v6;
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
      *((_DWORD *)a1 + 10) = 0;
    }
    return 1;
  }
  return v4;
}
