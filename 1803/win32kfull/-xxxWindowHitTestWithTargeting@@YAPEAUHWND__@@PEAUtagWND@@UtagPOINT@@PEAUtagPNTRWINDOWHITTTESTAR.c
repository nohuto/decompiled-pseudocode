/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01CB1F0
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     xxxPointerWindowHitTest @ 0x1C01CC520 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01C8968 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01C8F5C (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01C9018 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C01C9A6C (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C01C9BAC (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01CA4A4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01CAE78 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

HWND __fastcall xxxWindowHitTestWithTargeting(__int64 a1, struct tagPOINT a2, __int64 a3, struct tagRECT *a4, int a5)
{
  int v5; // r12d
  struct tagWND *v6; // r13
  struct tagRECT v7; // xmm6
  HWND v8; // r15
  struct tagPOINT v10; // rbx
  __int64 v11; // rsi
  struct tagTOUCHTARGETINGCONTACT *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r12d
  unsigned int v18; // r13d
  unsigned int Prop; // r12d
  _OWORD *v20; // rax
  struct tagRECT *v21; // r8
  __int128 v22; // xmm1
  HWND v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  struct tagPOINT *v26; // rax
  __int64 v27; // rax
  int started; // [rsp+48h] [rbp-41h]
  int v30; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v31; // [rsp+50h] [rbp-39h] BYREF
  int v32; // [rsp+54h] [rbp-35h] BYREF
  struct tagWND *v33; // [rsp+58h] [rbp-31h]
  struct tagRECT v34; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v35[6]; // [rsp+78h] [rbp-11h] BYREF
  int v36; // [rsp+E8h] [rbp+5Fh]
  struct tagPOINT v37; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v38; // [rsp+100h] [rbp+77h]

  v38 = a4;
  v37 = a2;
  v5 = 0;
  started = 0;
  v6 = 0LL;
  v7 = *a4;
  v8 = 0LL;
  v32 = -2;
  v36 = 0;
  v33 = 0LL;
  v10 = a2;
  v11 = a1;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v6 = *(struct tagWND **)(a1 + 80);
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v33 = v6;
    started = CanPointStartResize(v6, v14, a2);
  }
  v15 = gptiCurrent;
  v35[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v35;
  v35[1] = 0LL;
LABEL_47:
  if ( v11 && !v5 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways(v11, (__int64)v35);
      v16 = *(_QWORD *)(a3 + 40);
      v15 = 0LL;
      if ( !*(_DWORD *)(v16 + 176) && !*(_DWORD *)(v16 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      v17 = IsCompositionInputWindow((const struct tagWND *)v11);
      if ( !v17 && (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x10) == 0
        || (v15 = *(_QWORD *)(v11 + 40), (*(_BYTE *)(v15 + 26) & 8) != 0) && (*(_BYTE *)(v15 + 24) & 0x20) != 0
        || (unsigned int)IsWindowDesktopComposed(v11) && (unsigned int)GetWindowCloakState((_QWORD *)v11)
        || started && TouchTargetingIsSpecialTarget(v6, (struct tagWND *)v11) )
      {
        v5 = v36;
LABEL_46:
        v11 = *(_QWORD *)(v11 + 64);
        v6 = v33;
        goto LABEL_47;
      }
      v18 = 0;
      v31 = 0;
      if ( *(_DWORD *)(a3 + 88) || v17 )
        Prop = RealGetProp(*(_QWORD *)(v11 + 120), (unsigned __int16)gatomPtrTargetFlags, 1LL);
      else
        Prop = 4;
      if ( *(_DWORD *)(a3 + 84) )
      {
        v20 = *(_OWORD **)(v11 + 200);
        if ( v20 )
        {
          v21 = *(struct tagRECT **)(a3 + 40);
          *(_OWORD *)(a3 + 104) = *v20;
          *(_OWORD *)(a3 + 120) = v20[1];
          *(_OWORD *)(a3 + 136) = v20[2];
          v22 = v20[3];
          *(_QWORD *)(a3 + 96) = a3 + 104;
          *(_OWORD *)(a3 + 152) = v22;
          ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v37, v21, 1);
          TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v38, 1);
          v10 = v37;
        }
      }
      v34 = *v38;
      v23 = xxxWindowHitTestFromTargetingProperty(v11, *(_QWORD *)&v10, (int *)a3, &v30, (unsigned __int16)Prop, &v34);
      if ( *(_DWORD *)(a3 + 88) < 0xFu )
      {
        v24 = v30;
      }
      else
      {
        v24 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v30 = 0;
      }
      if ( v24 )
      {
        v34 = *v38;
        v25 = xxxTargetingHitTest(v11, a2, *(_QWORD *)&v10, (unsigned int *)a3, &v31, &v34, Prop, a5);
        v18 = v31;
        v23 = (HWND)v25;
      }
      if ( !v8 && v23 )
        v8 = v23;
      v5 = v36;
      if ( *(_QWORD *)(a3 + 168) == v11 )
        v5 = 1;
      v36 = v5;
      xxxSendNCHitTest(
        (__int64 *)v11,
        a2,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v32,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      if ( v32 != -1 )
        ClipContact((struct tagWND *)v11, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v18, v38);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v15 = *(_QWORD *)(a3 + 96);
        if ( v15 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform((const struct _D3DMATRIX *)v15, &v37, *(struct tagRECT **)(a3 + 40), 0);
            v10 = v37;
            *v38 = v7;
            v26 = *(struct tagPOINT **)(a3 + 40);
            *(_QWORD *)(a3 + 96) = 0LL;
            v26[4] = a2;
          }
        }
      }
      if ( !v5 )
        goto LABEL_46;
      v27 = *(_QWORD *)(v11 + 96);
      if ( !v27 || v27 == v11 )
        break;
      v6 = v33;
      v11 = *(_QWORD *)(v11 + 96);
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))ThreadUnlock1)(v15, a2, a3);
  return v8;
}
