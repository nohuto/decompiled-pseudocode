/*
 * XREFs of ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x18001AE90
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$7 @ 0x180038C6F (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$3 @ 0x180038D48 (_CProcess--CProcess_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<unsigned long>::~vector<unsigned long>(__int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x18001AEECLL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
