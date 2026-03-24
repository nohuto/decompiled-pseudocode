/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x1402DA2E0
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1402D9968 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1402D9A28 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxUpdateGlobalDeviceAccountingInfo(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 *i; // r9

  result = qword_140418EA8;
  if ( qword_140418EA8 < a1 )
  {
    v3 = a1 - qword_140418EA8;
    qword_140418EB0 += a1 - qword_140418EA8;
    if ( a1 - qword_140418EA8 < a2 )
    {
      qword_140418EB8 += v3;
    }
    else
    {
      v4 = 0LL;
      for ( i = PopFxAccountingBucketLimits; ; ++i )
      {
        if ( v3 >= *i )
        {
          result = (unsigned int)(v4 + 1);
          if ( v3 < PopFxAccountingBucketLimits[result] )
            break;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= 5 )
          return result;
      }
      ++*(_QWORD *)&PopFxGlobalDeviceAccountingInfo[8 * v4 + 32];
      *(_QWORD *)&PopFxGlobalDeviceAccountingInfo[8 * v4 + 72] += v3;
    }
  }
  return result;
}
