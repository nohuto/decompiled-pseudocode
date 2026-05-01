/*
 * XREFs of ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x180061F78
 * Callers:
 *     _lambda_2998a484fcd7d742033ed970065ccf76_::_lambda_2998a484fcd7d742033ed970065ccf76_ @ 0x180061F04 (_lambda_2998a484fcd7d742033ed970065ccf76_--_lambda_2998a484fcd7d742033ed970065ccf76_.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001B5FC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

ExperienceManagerUtils::CopyableHString *__fastcall ExperienceManagerUtils::CopyableHString::CopyableHString(
        ExperienceManagerUtils::CopyableHString *this,
        const struct ExperienceManagerUtils::CopyableHString *a2)
{
  int v3; // eax
  HSTRING v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v3;
  if ( v3 >= 0 )
  {
    v5 = *(HSTRING *)a2;
    *((_DWORD *)this + 2) = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this, &v5);
  }
  return this;
}
