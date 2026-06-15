/*
 * XREFs of ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140013650
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14000D2A0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400136E0 (-SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEA.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::Initialize(CProcessSubmix *this, struct PROCESS_SUBMIX_DESCRIPTOR *a2)
{
  enum PIPE_TYPE v4; // edx
  int v5; // ebx
  __int64 v7; // rdx
  int v8[44]; // [rsp+20h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  memset_0(v8, 0, sizeof(v8));
  v5 = SubMixDescriptorFromProcessSubmixDescriptor(a2, v4, (struct SUBMIX_DESCRIPTOR *)v8);
  if ( v5 < 0 )
  {
    v7 = 55LL;
  }
  else
  {
    v5 = CSubmixImpl::Initialize((CProcessSubmix *)((char *)this + 16), (struct SUBMIX_DESCRIPTOR *)v8);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 58LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
    (const char *)(unsigned int)v5,
    v8[0]);
  return (unsigned int)v5;
}
