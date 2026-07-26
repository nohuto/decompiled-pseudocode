/*
 * XREFs of ndisQueryOpenRSSParameters @ 0x1C006F940
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C003B000 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisCalculateRssParametersSize @ 0x1C003B624 (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

__int64 __fastcall ndisQueryOpenRSSParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rsi
  KIRQL v6; // r14
  int v7; // edx
  __int64 v8; // rcx
  size_t v9; // r15
  char v11; // [rsp+30h] [rbp-38h]
  size_t Size; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      137,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v2,
      v11);
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  if ( *(_WORD *)(v2 + 2694) )
  {
    v8 = *(_QWORD *)(a1 + 488);
    if ( !v8 || (v3 = ndisCalculateRssParametersSize(v8, (unsigned int *)&Size)) != 0 )
    {
      *(_DWORD *)(v4 + 52) = 0;
      *(_QWORD *)(v2 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    }
    else
    {
      v9 = (unsigned int)Size;
      v3 = 0;
      if ( *(_DWORD *)(v4 + 48) < (unsigned int)Size )
      {
        *(_DWORD *)(v4 + 56) = Size;
        v3 = -1073676268;
      }
      if ( !v3 )
      {
        memmove(*(void **)(v4 + 40), *(const void **)(a1 + 488), v9);
        *(_DWORD *)(v4 + 52) = v9;
      }
      *(_QWORD *)(v2 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    }
  }
  else
  {
    *(_QWORD *)(v2 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    v3 = -1073741637;
    *(_DWORD *)(v4 + 52) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      138,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v2,
      v3);
  }
  return v3;
}
