/*
 * XREFs of ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FD2F8
 * Callers:
 *     ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x1803FD030 (-Show@CDropFeedbackItem@@UEAAXXZ.c)
 *     ?Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FD090 (-Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x1803FBA5C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564_ea_1803FBA5C.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1803FBBD4 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x1803FBC70 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x1803FD960 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 *     McTemplateU0ddz @ 0x1803FDBA8 (McTemplateU0ddz.c)
 *     McTemplateU0qdddd @ 0x1803FDC34 (McTemplateU0qdddd.c)
 */

__int64 __fastcall CDropFeedbackItem::_Update(struct tagPOINT a1, unsigned int a2, __int64 a3)
{
  int v4; // ecx
  unsigned int v7; // r14d
  int v8; // ecx
  int v9; // ecx
  HWND v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, struct tagPOINT *, _QWORD, _QWORD); // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  HWND v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r10d
  int v22; // r11d
  __int128 v23; // xmm0
  int v24; // eax
  int v25; // r9d
  int v26; // r9d
  int v27; // ecx
  __int64 v28; // rdx
  LONG v29; // r12d
  __int64 v30; // rcx
  int v31; // ecx
  bool v33; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v34; // [rsp+48h] [rbp-31h] BYREF
  __int128 v35; // [rsp+50h] [rbp-29h] BYREF
  struct tagPOINT Points[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v37; // [rsp+70h] [rbp-9h] BYREF
  __int64 v38[2]; // [rsp+80h] [rbp+7h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)&a1 + 68LL);
  v7 = 0;
  if ( !v4 )
  {
    v33 = 0;
    Points[1] = (struct tagPOINT)&v33;
    Points[0] = a1;
    if ( a2 == 6 )
    {
      v38[0] = 0LL;
      v34 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v38);
      *(struct tagPOINT *)&v37 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
      if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
                  (__int64)Points,
                  (__int64 *)&v37,
                  a3,
                  v38) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 128LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          6LL,
          v38[0]);
      v18 = (__int64 *)&v34;
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)&a1 + 72LL) & 0x80000) == 0 )
      {
        v20 = *(_DWORD *)(*(_QWORD *)&a1 + 140LL);
        v21 = *(_DWORD *)(*(_QWORD *)&a1 + 144LL);
        v22 = *(_DWORD *)(*(_QWORD *)&a1 + 128LL);
        v23 = *(_OWORD *)(*(_QWORD *)&a1 + 124LL);
        v24 = (*(_DWORD *)(*(_QWORD *)&a1 + 148LL) - v20) / 2;
        v37 = 0LL;
        v25 = v24 - (*(_DWORD *)(*(_QWORD *)&a1 + 132LL) - *(_DWORD *)(*(_QWORD *)&a1 + 124LL)) / 2;
        v26 = (v20 + v25 - *(_DWORD *)(*(_QWORD *)&a1 + 124LL)) * (v20 + v25 - *(_DWORD *)(*(_QWORD *)&a1 + 124LL));
        v27 = v21
            + (*(_DWORD *)(*(_QWORD *)&a1 + 152LL) - v21) / 2
            - (*(_DWORD *)(*(_QWORD *)&a1 + 136LL) - v22) / 2
            - v22;
        *(_OWORD *)(*(_QWORD *)&a1 + 140LL) = v23;
        v33 = v26 + v27 * v27 < 10;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CDropFeedbackItem::_ZoomRect)(a1, 1LL, &v37);
        v28 = (unsigned int)(HIDWORD(v37) - DWORD1(v37));
        if ( *(_DWORD *)(*(_QWORD *)&a1 + 132LL) - *(_DWORD *)(*(_QWORD *)&a1 + 124LL) != DWORD2(v37) - (_DWORD)v37
          || (v29 = 0, *(_DWORD *)(*(_QWORD *)&a1 + 136LL) - *(_DWORD *)(*(_QWORD *)&a1 + 128LL) != (_DWORD)v28) )
        {
          v29 = 1;
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 32LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          v28,
          a2,
          0LL);
        v34 = a1;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
        v35 = *(_OWORD *)&Points[0].x;
        Points[0] = a1;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)Points);
        v30 = *(_QWORD *)(*(_QWORD *)&a1 + 184LL);
        Points[1].x = v29;
        DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
          v30,
          (int)&v37,
          a2,
          &v35,
          (__int64 *)Points,
          a3);
        v38[0] = 0LL;
        v38[1] = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CDropFeedbackItem::_ZoomRect)(a1, 0LL, v38);
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 40LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          v38,
          a2,
          0LL);
        *(_BYTE *)(*(_QWORD *)&a1 + 157LL) = 1;
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0qdddd(
            v31,
            (unsigned int)&DropFeedbackItem_Update_Info,
            *(_DWORD *)(*(_QWORD *)&a1 + 32LL),
            v37,
            SBYTE4(v37),
            SBYTE8(v37),
            SBYTE12(v37));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        return v7;
      }
      v38[0] = 0LL;
      *(struct tagPOINT *)&v37 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
      v34 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
      DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
        v19,
        a2,
        (__int128 *)Points,
        (__int64 *)&v34,
        a3);
      v18 = (__int64 *)&v37;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v38);
    return v7;
  }
  v8 = v4 - 1;
  if ( !v8 )
    goto LABEL_10;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = *(HWND *)(*(_QWORD *)&a1 + 192LL);
      *(_OWORD *)&Points[0].x = *(_OWORD *)(*(_QWORD *)&a1 + 76LL);
      MapWindowPoints(0LL, v10, Points, 2u);
      v11 = *(_QWORD *)(*(_QWORD *)&a1 + 184LL);
      v12 = *(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL);
      if ( (*(_DWORD *)(*(_QWORD *)&a1 + 72LL) & 0x80000) == 0 )
      {
        v14 = v12(v11, Points, a2, 0LL);
        goto LABEL_9;
      }
      v7 = v12(v11, Points, 0LL, 0LL);
      if ( (v7 & 0x80000000) == 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 32LL))(
                *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
                v13,
                a2,
                0LL);
LABEL_9:
        v7 = v14;
      }
LABEL_10:
      *(_BYTE *)(*(_QWORD *)&a1 + 157LL) = 1;
    }
  }
  else
  {
    v15 = *(HWND *)(*(_QWORD *)&a1 + 192LL);
    *(_OWORD *)&Points[0].x = *(_OWORD *)(*(_QWORD *)&a1 + 76LL);
    MapWindowPoints(0LL, v15, Points, 2u);
    (*(void (__fastcall **)(_QWORD, struct tagPOINT *, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 24LL))(
      *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
      Points,
      0LL,
      0LL);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0ddz(v17, v16, *(unsigned int *)(*(_QWORD *)&a1 + 76LL), *(unsigned int *)(*(_QWORD *)&a1 + 80LL));
  }
  return v7;
}
