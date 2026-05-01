/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x18039A9DC
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x18039ABCC (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 * Callees:
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x18003CC3C (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@Z @ 0x18016C204 (-Attach@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewOperation,ApplicationViewOperation,>(
        volatile signed __int64 **a1)
{
  unsigned int v2; // ebx
  ApplicationViewOperation *v3; // rax
  volatile signed __int64 *v4; // rax
  volatile signed __int64 *v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  volatile signed __int64 *v9; // [rsp+30h] [rbp+8h] BYREF
  ApplicationViewOperation *v10; // [rsp+38h] [rbp+10h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (ApplicationViewOperation *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v3;
  if ( v3 )
  {
    v4 = (volatile signed __int64 *)ApplicationViewOperation::ApplicationViewOperation(v3);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::Attach(&v9, v4);
    v5 = v9;
    if ( v9 )
    {
      v6 = *((_QWORD *)v9 + 8);
      while ( v6 >= 0 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v5 + 8, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_9:
      v5 = v9;
    }
    *a1 = v5;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
