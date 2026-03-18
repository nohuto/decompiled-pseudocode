/*
 * XREFs of CachePTPInertiaInfo @ 0x1C01C2930
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C000810C (InvalidateInertiaInfo.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     SetRITTimer @ 0x1C01153C0 (SetRITTimer.c)
 *     ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01C23D0 (-TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     QueryInertiaInfo @ 0x1C0226920 (QueryInertiaInfo.c)
 */

__int64 __fastcall CachePTPInertiaInfo(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  unsigned __int64 v4; // rcx
  __m128i *v5; // rbp
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 v10; // xmm0

  v2 = (void *)a2;
  v4 = a2;
  LOBYTE(a2) = 19;
  v5 = *(__m128i **)(HMValidateHandleNoSecure(v4, a2) + 480);
  result = QueryInertiaInfo(v6, gptCursorAsync, 0LL);
  v8 = result;
  if ( result )
  {
    ghdevTouchpad = v2;
    v9 = SetRITTimer(gtmridTouchpadInertiaTimer, 0x32u, (__int64)xxxInertiaPTPTimerProc, 1);
    v10 = *(_OWORD *)v8;
    gtmridTouchpadInertiaTimer = v9;
    *(_OWORD *)a1 = v10;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v8 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v8 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v8 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v8 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v8 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v8 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v8 + 128);
    *(_QWORD *)(a1 + 144) = gptCursorAsync;
    TransformTPScreenToHimetric(v5, (struct tagPOINT)gptCursorAsync, (struct tagPOINT *)(a1 + 152));
    *(_DWORD *)(a1 + 160) |= 1u;
    EtwTraceTouchpadInertiaContact();
    return InvalidateInertiaInfo(*(_QWORD *)v8, *(_QWORD *)(v8 + 8));
  }
  return result;
}
