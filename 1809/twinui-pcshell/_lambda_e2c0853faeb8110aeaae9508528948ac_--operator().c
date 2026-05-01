/*
 * XREFs of _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x180311944
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_e2c0853faeb8110aeaae9508528948ac_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1803115F0 (--$LambdaEnumWindowsProc@V_lambda_e2c0853faeb8110aeaae9508528948ac_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801301B0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x180311BA8 (-AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@.c)
 *     ?GetSourceRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x18031275C (-GetSourceRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagREC.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1803134A0 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 */

char __fastcall lambda_e2c0853faeb8110aeaae9508528948ac_::operator()(__int64 *a1, HWND a2)
{
  char v2; // r14
  struct ISwitchItemElement *v3; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx
  signed int v8; // esi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  bool v11; // si
  bool v12; // r9
  MultitaskingViewAnimationCoordinatorBase *v13; // rcx
  struct ISwitchItemElement *v15; // [rsp+20h] [rbp-30h] BYREF
  HWND v16; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-20h] BYREF

  v2 = 0;
  v16 = a2;
  v3 = 0LL;
  v15 = 0LL;
  v5 = *a1;
  v7 = *(_QWORD *)(*a1 + 16);
  v8 = v7 == 0 ? 0x8002802B : 0;
  if ( v7 )
  {
    v9 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
           v7,
           *(unsigned int *)(v5 + 4),
           &v16);
    v8 = *(_DWORD *)v9 != 1 ? 0x8002802B : 0;
    if ( *(_DWORD *)v9 == 1 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v15, (__int64 *)(v9 + 16));
      v3 = v15;
    }
  }
  v11 = 0;
  if ( v8 >= 0 )
  {
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, struct tagRECT *))(*(_QWORD *)v3 + 24LL))(
                      v3,
                      &rcDst);
    v2 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 152LL))(*v10) )
      v11 = 1;
  }
  if ( (v2 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rcDst.left);
  if ( v11 )
  {
    if ( !IsWindowVisible(a2)
      || (*(unsigned __int8 (__fastcall **)(__int64, struct ISwitchItemElement *))(*(_QWORD *)a1[1] + 112LL))(a1[1], v3) )
    {
      (*(void (__fastcall **)(__int64, struct ISwitchItemElement *, _QWORD))(*(_QWORD *)a1[1] + 120LL))(
        a1[1],
        v3,
        *(_QWORD *)(a1[1] + 64));
    }
    else
    {
      v12 = *(_BYTE *)a1[2]
         && !(*(unsigned __int8 (__fastcall **)(__int64, struct ISwitchItemElement *))(*(_QWORD *)a1[1] + 104LL))(
               a1[1],
               v3);
      MultitaskingViewAnimationCoordinatorBase::AnimateVisibleSwitchItem(
        (MultitaskingViewAnimationCoordinatorBase *)a1[1],
        v3,
        *(struct IDCompBatchAnimationCallback **)(a1[1] + 64),
        v12);
      if ( !*(_BYTE *)a1[2] )
      {
        *(_QWORD *)&rcDst.left = 0LL;
        *(_QWORD *)&rcDst.right = 0LL;
        MultitaskingViewAnimationCoordinatorBase::GetSourceRect(v13, v3, &rcDst);
        if ( IntersectRect(&rcDst, &rcDst, (const RECT *)a1[3]) )
        {
          if ( Platform::Guid::Equals((Platform::Guid *)&rcDst, (const struct _GUID *)a1[3]) )
            *(_BYTE *)a1[2] = 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return 1;
}
