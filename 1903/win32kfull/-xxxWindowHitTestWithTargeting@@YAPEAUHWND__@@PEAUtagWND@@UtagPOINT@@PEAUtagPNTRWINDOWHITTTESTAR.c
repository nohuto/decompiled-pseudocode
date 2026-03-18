/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205968
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204D90 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     xxxPointerWindowHitTest @ 0x1C0206BD0 (xxxPointerWindowHitTest.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     ThreadLockExchangeAlways @ 0x1C011EE8C (ThreadLockExchangeAlways.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C0203568 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0203968 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C0203A24 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C02043A0 (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C02044D0 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0204B4C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204D90 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02055A0 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

__int64 __fastcall xxxWindowHitTestWithTargeting(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        struct tagRECT *a4,
        int a5)
{
  __int64 v5; // rsi
  struct tagRECT v6; // xmm6
  int v7; // r12d
  struct tagWND *v8; // r13
  __int64 v9; // r15
  struct tagPOINT v11; // rbx
  struct tagTOUCHTARGETINGCONTACT *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r12d
  unsigned int v18; // r13d
  unsigned int Prop; // r12d
  _OWORD *v20; // rax
  struct tagRECT *v21; // r8
  __int128 v22; // xmm1
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  struct tagRECT *v26; // rax
  __int64 v27; // rax
  int started; // [rsp+48h] [rbp-41h]
  int v30; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v31; // [rsp+50h] [rbp-39h] BYREF
  int v32; // [rsp+54h] [rbp-35h] BYREF
  struct tagWND *v33; // [rsp+58h] [rbp-31h]
  struct tagRECT v34; // [rsp+68h] [rbp-21h] BYREF
  __int64 v35; // [rsp+78h] [rbp-11h] BYREF
  __int64 v36; // [rsp+80h] [rbp-9h]
  __int64 v37; // [rsp+88h] [rbp-1h]
  int v38; // [rsp+E8h] [rbp+5Fh]
  struct tagPOINT v39; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v40; // [rsp+100h] [rbp+77h]

  v40 = a4;
  v39 = a2;
  v5 = a1;
  v6 = *a4;
  v32 = -2;
  started = 0;
  v7 = 0;
  v8 = 0LL;
  v35 = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  v11 = a2;
  v33 = 0LL;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v8 = *(struct tagWND **)(a1 + 104);
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v33 = v8;
    started = CanPointStartResize(v8, v14, a2);
  }
  v15 = gptiCurrent;
  v35 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v35;
  v36 = 0LL;
LABEL_47:
  if ( v5 && !v7 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways(v5, (__int64)&v35);
      v16 = *(_QWORD *)(a3 + 40);
      v15 = 0LL;
      if ( !*(_DWORD *)(v16 + 176) && !*(_DWORD *)(v16 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      v17 = IsCompositionInputWindow((const struct tagWND *)v5);
      if ( !v17 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) == 0
        || (v15 = *(_QWORD *)(v5 + 40), (*(_BYTE *)(v15 + 26) & 8) != 0) && (*(_BYTE *)(v15 + 24) & 0x20) != 0
        || (unsigned int)IsWindowDesktopComposed(v5) && (unsigned int)GetWindowCloakState((_QWORD *)v5)
        || started && TouchTargetingIsSpecialTarget(v8, (struct tagWND *)v5) )
      {
        v7 = v38;
LABEL_46:
        v5 = *(_QWORD *)(v5 + 88);
        v8 = v33;
        goto LABEL_47;
      }
      v18 = 0;
      v31 = 0;
      if ( *(_DWORD *)(a3 + 88) || v17 )
        Prop = GetProp(v5, (unsigned __int16)gatomPtrTargetFlags, 1LL);
      else
        Prop = 4;
      if ( *(_DWORD *)(a3 + 84) )
      {
        v20 = *(_OWORD **)(v5 + 216);
        if ( v20 )
        {
          v21 = *(struct tagRECT **)(a3 + 40);
          *(_OWORD *)(a3 + 104) = *v20;
          *(_OWORD *)(a3 + 120) = v20[1];
          *(_OWORD *)(a3 + 136) = v20[2];
          v22 = v20[3];
          *(_QWORD *)(a3 + 96) = a3 + 104;
          *(_OWORD *)(a3 + 152) = v22;
          ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v39, v21, 1);
          TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v40, 1);
          v11 = v39;
        }
      }
      v34 = *v40;
      v23 = xxxWindowHitTestFromTargetingProperty(
              (__int64 *)v5,
              *(_QWORD *)&v11,
              a3,
              &v30,
              (unsigned __int16)Prop,
              &v34);
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
        v34 = *v40;
        v25 = xxxTargetingHitTest(v5, a2, *(_QWORD *)&v11, a3, &v31, &v34, Prop, a5);
        v18 = v31;
        v23 = v25;
      }
      if ( !v9 && v23 )
        v9 = v23;
      v7 = v38;
      if ( *(_QWORD *)(a3 + 168) == v5 )
        v7 = 1;
      v38 = v7;
      xxxSendNCHitTest(
        (__int64 *)v5,
        a2,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v32,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      if ( v32 != -1 )
        ClipContact((struct tagWND *)v5, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v18, v40);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v15 = *(_QWORD *)(a3 + 96);
        if ( v15 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform((const struct _D3DMATRIX *)v15, &v39, *(struct tagRECT **)(a3 + 40), 0);
            v26 = v40;
            *(_QWORD *)(a3 + 96) = 0LL;
            v11 = v39;
            *v26 = v6;
            *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL) = a2;
          }
        }
      }
      if ( !v7 )
        goto LABEL_46;
      v27 = *(_QWORD *)(v5 + 120);
      if ( !v27 || v27 == v5 )
        break;
      v8 = v33;
      v5 = *(_QWORD *)(v5 + 120);
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))ThreadUnlock1)(v15, a2, a3);
  return v9;
}
