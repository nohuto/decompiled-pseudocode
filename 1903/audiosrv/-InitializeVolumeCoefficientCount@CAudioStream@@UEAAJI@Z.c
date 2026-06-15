/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x1800DA870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D9FDC (--4-$unique_ptr@$$BY0A@MU-$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, unsigned int a2)
{
  SIZE_T v3; // rax
  __int64 *v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  SIZE_T v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 21) != a2 )
  {
    *((_DWORD *)this + 21) = a2;
    v3 = 4LL * a2;
    if ( !is_mul_ok(a2, 4uLL) )
      v3 = -1LL;
    v4 = (__int64 *)((char *)this + 104);
    v12 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=((void **)this + 13, &v12);
    v5 = 0;
    if ( v12 )
      operator delete(v12);
    if ( !*v4 )
    {
      v6 = 214LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v8 = 4LL * *((unsigned int *)this + 21);
    if ( !is_mul_ok(*((unsigned int *)this + 21), 4uLL) )
      v8 = -1LL;
    v12 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=((void **)this + 14, &v12);
    if ( v12 )
      operator delete(v12);
    if ( !*((_QWORD *)this + 14) )
    {
      v6 = 216LL;
      goto LABEL_8;
    }
    if ( *((_DWORD *)this + 21) )
    {
      v9 = *v4;
      do
      {
        v10 = v5++;
        *(_DWORD *)(v9 + 4 * v10) = 1065353216;
      }
      while ( v5 < *((_DWORD *)this + 21) );
    }
  }
  return 0LL;
}
