/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutParser@@@Z @ 0x180167C00
 * Callers:
 *     ?TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18016A044 (-TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0TaskbarLayoutParser@@QEAA@XZ @ 0x180168558 (--0TaskbarLayoutParser@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x180169E44 (-RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutParser,TaskbarLayoutParser,>(
        TaskbarLayoutParser **a1)
{
  TaskbarLayoutParser *v2; // rax
  int v3; // edi
  TaskbarLayoutParser *v4; // rbx
  TaskbarLayoutParser *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (TaskbarLayoutParser *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TaskbarLayoutParser::TaskbarLayoutParser(v2);
    v6 = v4;
    v7 = 0LL;
    v3 = TaskbarLayoutParser::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(TaskbarLayoutParser *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
