/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801DC9F0
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801DC3E4 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801DC654 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801DDC64 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 *a2, float a3)
{
  char v4; // si
  __int64 v6; // rcx
  char v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // ecx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  int v18; // [rsp+58h] [rbp-40h]
  _QWORD v19[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = 1;
  if ( !CInteractionTracker::ShouldNotify((CInteractionTracker *)a1, 1u) )
    return 0;
  if ( v7 )
    goto LABEL_7;
  v8 = *(_QWORD *)(v6 + 504) - *a2;
  if ( !v8 )
    v8 = *(unsigned int *)(a1 + 512) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v8 && *(float *)(a1 + 516) == a3 )
    return 0;
LABEL_7:
  v9 = *a2;
  v18 = *((_DWORD *)a2 + 2);
  v10 = *(_QWORD *)(a1 + 16);
  v17 = v9;
  v11 = *(_QWORD *)(v10 + 1224);
  v12 = *(_QWORD *)(a1 + 48);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 68);
  else
    v13 = 0;
  v19[0] = v13;
  v19[1] = *(unsigned int *)(a1 + 56);
  LOWORD(v16) = 0;
  CoreUICallSend(*(_QWORD *)(v11 + 48), v19, 2LL, 8LL, v16, &unk_1802B2E44, (unsigned int)&v17, a3);
  v14 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 504) = *a2;
  *(_DWORD *)(a1 + 512) = v14;
  *(float *)(a1 + 516) = a3;
  return v4;
}
