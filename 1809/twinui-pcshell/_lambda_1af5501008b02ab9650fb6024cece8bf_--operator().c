/*
 * XREFs of _lambda_1af5501008b02ab9650fb6024cece8bf_::operator() @ 0x1802403D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1af5501008b02ab9650fb6024cece8bf___::Run @ 0x180243600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1af5501008b02ab9650fb6024cece8bf___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1af5501008b02ab9650fb6024cece8bf_::operator()(_QWORD *a1)
{
  __int64 v2; // rbx
  PCWSTR StringRawBuffer; // rsi
  int v4; // edx
  int v5; // edx
  RTL_SRWLOCK *v6; // rbp
  int v7; // r14d
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(*(_QWORD *)(*a1 + 168LL) + 496LL);
  v10 = v2;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 152LL), 0LL);
    v9 = -1LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 632LL))(*a1 + 8LL, &v9);
    v4 = *((_DWORD *)a1 + 6);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
      {
        (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v2 + 24LL))(
          v2,
          StringRawBuffer,
          v9,
          a1[2],
          1);
        return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      }
      if ( v5 != 1 )
        return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
    else
    {
      (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
        v2,
        StringRawBuffer,
        v9,
        a1[2],
        0);
    }
    v6 = (RTL_SRWLOCK *)(*(_QWORD *)(*a1 + 168LL) + 296LL);
    AcquireSRWLockShared(v6);
    v11 = v6;
    v7 = ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 120LL))(*a1) - 4 > 1) + 2;
    if ( v6 )
      ReleaseSRWLockShared(v6);
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v2 + 24LL))(
      v2,
      StringRawBuffer,
      v9,
      a1[2],
      v7);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
