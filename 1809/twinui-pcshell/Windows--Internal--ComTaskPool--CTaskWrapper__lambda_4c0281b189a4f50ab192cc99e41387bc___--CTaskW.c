/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc___::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc_____lambda_4c0281b189a4f50ab192cc99e41387bc___ @ 0x1802826AC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4c0281b189a4f50ab192cc99e41387bc___ @ 0x180282A0C (Windows--Internal--ComTaskPool--QueueTask__lambda_4c0281b189a4f50ab192cc99e41387bc___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc___::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc_____lambda_4c0281b189a4f50ab192cc99e41387bc___(
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
  *a1 = off_18050A8F0;
  return a1;
}
