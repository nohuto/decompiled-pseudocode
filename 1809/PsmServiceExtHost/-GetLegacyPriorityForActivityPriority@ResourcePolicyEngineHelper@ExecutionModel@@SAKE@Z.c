/*
 * XREFs of ?GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z @ 0x180018484
 * Callers:
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180018100 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(unsigned __int8 a1)
{
  __int64 result; // rax

  if ( a1 >= 0xC8u )
    return 2LL;
  if ( a1 >= 0xAAu )
    return 10LL;
  if ( a1 >= 0xA0u )
    return 20LL;
  if ( a1 >= 0x96u )
    return 30LL;
  if ( a1 >= 0x8Cu )
    return 40LL;
  if ( a1 >= 0x82u )
    return 50LL;
  if ( a1 >= 0x50u )
    return 60LL;
  if ( a1 >= 0x14u )
    return 70LL;
  if ( a1 >= 0xFu )
    return 80LL;
  result = 100LL;
  if ( a1 >= 5u )
    return 90LL;
  return result;
}
