/*
 * XREFs of _lambda_ed8ffcce05179564df35e7d067b53c30_::operator() @ 0x1803FC248
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::OnStoryboardStatusChanged @ 0x1803FC740 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_1803FC740.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::OnStoryboardStatusChanged @ 0x1803FC880 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_1803FC880.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___::OnStoryboardStatusChanged @ 0x1803FC990 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_1803FC990.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ed8ffcce05179564df35e7d067b53c30_::operator()(_QWORD *a1, char a2)
{
  _BYTE *v3; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184LL) + 72LL))(*(_QWORD *)(*a1 + 184LL), 0LL);
    v3 = (_BYTE *)a1[1];
    LOBYTE(v3) = *v3;
    return (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*a1 + 184LL) + 160LL))(
             *(_QWORD *)(*a1 + 184LL),
             v3);
  }
  return result;
}
