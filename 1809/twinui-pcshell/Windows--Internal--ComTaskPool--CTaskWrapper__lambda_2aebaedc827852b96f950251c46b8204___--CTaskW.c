/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204___::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204_____lambda_2aebaedc827852b96f950251c46b8204___ @ 0x18008922C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2aebaedc827852b96f950251c46b8204___ @ 0x180089708 (Windows--Internal--ComTaskPool--QueueTask__lambda_2aebaedc827852b96f950251c46b8204___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204___::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204_____lambda_2aebaedc827852b96f950251c46b8204___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_1803C9028;
  return a1;
}
