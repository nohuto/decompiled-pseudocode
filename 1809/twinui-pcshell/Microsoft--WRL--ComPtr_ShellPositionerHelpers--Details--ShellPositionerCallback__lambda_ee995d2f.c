/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____ @ 0x180089B2C
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef____::_1_::dtor$2 @ 0x1800896F4 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9_ea_1800896F4.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_824e0001d4003052e3151e6c6489077e____::_1_::dtor$2 @ 0x18008A97C (_ShellPositionerHelpers--PerformCallbackOnView__lambda_824e0001d4003052e3151e6c6489_ea_18008A97C.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_ff74802286da7733b76df6a3bea32e5e____::_1_::dtor$2 @ 0x1800AE6C7 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_ff74802286da7733b76df6a3bea32e5e____--_1_.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_310dc8e09bda01c6ffd3caaf734d3fa2____::_1_::dtor$2 @ 0x18012A4AD (_ShellPositionerHelpers--PerformCallbackOnView__lambda_310dc8e09bda01c6ffd3caaf734d_ea_18012A4AD.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_e82093062f3543b63215b0da2be0dc6a____::_1_::dtor$2 @ 0x18012A615 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_e82093062f3543b63215b0da2be0_ea_18012A615.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_208f168f51bfbb928939bf261202e971____::_1_::dtor$2 @ 0x180132E59 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_208f168f51bfbb928939bf261202_ea_180132E59.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_32076d8d527a4c2a596cc095f37c3471____::_1_::dtor$2 @ 0x1801CFD79 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_32076d8d527a4c2a596cc095f37c_ea_1801CFD79.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_4f38a82f935cf712510567f9984cd460____::_1_::dtor$2 @ 0x1801CFEE1 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_4f38a82f935cf712510567f9984c_ea_1801CFEE1.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_895f2797b68fbab3f512c16542fc9f15____::_1_::dtor$2 @ 0x1801D0049 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_895f2797b68fbab3f512c16542fc_ea_1801D0049.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_8e9ce47d82d357e106fccb3559ce9081____::_1_::dtor$2 @ 0x1801D01B1 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_8e9ce47d82d357e106fccb3559ce_ea_1801D01B1.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_aa2cf94f0290717a2ddf105a3ddda7cf____::_1_::dtor$2 @ 0x1801D0319 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_aa2cf94f0290717a2ddf105a3ddd_ea_1801D0319.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf____::_1_::dtor$2 @ 0x180331599 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9_ea_180331599.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
