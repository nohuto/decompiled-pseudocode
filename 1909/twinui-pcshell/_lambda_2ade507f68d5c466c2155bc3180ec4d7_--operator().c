/*
 * XREFs of _lambda_2ade507f68d5c466c2155bc3180ec4d7_::operator() @ 0x18018F6F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::Run @ 0x180191050 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_2ade507f68d5c466c2155bc3180ec4d7_::operator()(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v4; // rbx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v5);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < v5; ++i )
    {
      v6 = 0LL;
      v4 = *(_QWORD *)a1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL))(
             v4,
             i,
             &GUID_7adc3cb7_307a_4f32_b2c6_c007ee409fd0,
             &v6) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, a1[2]);
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
  }
  return result;
}
