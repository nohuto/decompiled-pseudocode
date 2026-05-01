/*
 * XREFs of _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x180371F94
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_e2c0853faeb8110aeaae9508528948ac_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180371C00 (--$LambdaEnumWindowsProc@V_lambda_e2c0853faeb8110aeaae9508528948ac_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180159C40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x1803721D8 (-AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@.c)
 *     ?GetSourceRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x180372D8C (-GetSourceRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagREC.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x180373AA0 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 */

char __fastcall lambda_e2c0853faeb8110aeaae9508528948ac_::operator()(__int64 *a1, HWND a2)
{
  char v2; // si
  struct ISwitchItemElement *v3; // rbx
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  bool v10; // r14
  bool v11; // r9
  MultitaskingViewAnimationCoordinatorBase *v12; // rcx
  struct ISwitchItemElement *v14; // [rsp+20h] [rbp-30h] BYREF
  HWND v15; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-20h] BYREF

  v2 = 0;
  v15 = a2;
  LODWORD(v14) = 0;
  v3 = 0LL;
  v4 = *a1;
  v14 = 0LL;
  v7 = *(_QWORD *)(v4 + 16);
  v10 = 0;
  if ( v7 )
  {
    v8 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
           v7,
           *(unsigned int *)(v4 + 4),
           &v15);
    if ( *(_DWORD *)v8 == 1 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v14, (__int64 *)(v8 + 16));
      v3 = v14;
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, struct tagRECT *))(*(_QWORD *)v14 + 24LL))(
                       v14,
                       &rcDst);
      v2 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 152LL))(*v9) )
        v10 = 1;
    }
  }
  if ( (v2 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rcDst.left);
  if ( v10 )
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
      v11 = *(_BYTE *)a1[2]
         && !(*(unsigned __int8 (__fastcall **)(__int64, struct ISwitchItemElement *))(*(_QWORD *)a1[1] + 104LL))(
               a1[1],
               v3);
      MultitaskingViewAnimationCoordinatorBase::AnimateVisibleSwitchItem(
        (MultitaskingViewAnimationCoordinatorBase *)a1[1],
        v3,
        *(struct IDCompBatchAnimationCallback **)(a1[1] + 64),
        v11);
      if ( !*(_BYTE *)a1[2] )
      {
        *(_QWORD *)&rcDst.left = 0LL;
        *(_QWORD *)&rcDst.right = 0LL;
        MultitaskingViewAnimationCoordinatorBase::GetSourceRect(v12, v3, &rcDst);
        if ( IntersectRect(&rcDst, &rcDst, (const RECT *)a1[3]) )
        {
          if ( Platform::Guid::Equals((Platform::Guid *)&rcDst, (const struct _GUID *)a1[3]) )
            *(_BYTE *)a1[2] = 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return 1;
}
