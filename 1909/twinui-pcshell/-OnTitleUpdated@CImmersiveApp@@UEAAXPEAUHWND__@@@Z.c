/*
 * XREFs of ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180034B60
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180034C00 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::OnTitleUpdated(CImmersiveApp *this, HWND a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v6; // rcx
  HWND v7; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+48h] [rbp-10h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( *((_QWORD *)this + 45) )
  {
    if ( !a2 )
      goto LABEL_6;
    v7 = a2;
    v8 = 0LL;
    v9 = 0;
    v11 = 0LL;
    v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
           (char *)this + 352,
           &v7,
           a3,
           &v10);
    if ( v5 >= 0 )
      v4 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( v5 >= 0 )
    {
LABEL_6:
      v6 = *(_QWORD *)(*((_QWORD *)this + 44) + 8 * v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
    }
  }
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 112));
}
