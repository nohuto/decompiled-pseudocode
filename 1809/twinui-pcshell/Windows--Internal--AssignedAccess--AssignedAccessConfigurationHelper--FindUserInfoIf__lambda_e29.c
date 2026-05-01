/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd___ @ 0x1803B29A8
 * Callers:
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1803B2DEC (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_e292dbe355bbba6f2cf9952d0b17febd_::operator() @ 0x1803B2BCC (_lambda_e292dbe355bbba6f2cf9952d0b17febd_--operator().c)
 *     ?GetAtCurrent@?$VectorRangeNoThrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1803B2EC0 (-GetAtCurrent@-$VectorRangeNoThrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Inte.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd___(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // r14d
  unsigned int v9; // ebx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h] BYREF
  int *v15; // [rsp+30h] [rbp-20h]
  int v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF

  v19 = a1;
  if ( a2 )
  {
    *a3 = 0LL;
    v5 = *a2;
    v20 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 80))(a2, &v20);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v16 = 0;
      v17 = 0LL;
      v15 = &v16;
      v13 = v20;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v14);
      *v15 = v7;
      wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::GetAtCurrent(
        &v13,
        0LL);
      v8 = v14;
      v9 = 0;
      v10 = 0;
      while ( *v15 >= 0 && v10 != v8 )
      {
        if ( (unsigned __int8)lambda_e292dbe355bbba6f2cf9952d0b17febd_::operator()(&v19, v17) )
        {
          v11 = v17;
          if ( v17 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            v11 = v17;
          }
          *a3 = v11;
          break;
        }
        v10 = ++v9;
        wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::GetAtCurrent(
          &v13,
          v9);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
      (const char *)0x80070057LL);
  }
  return v4;
}
