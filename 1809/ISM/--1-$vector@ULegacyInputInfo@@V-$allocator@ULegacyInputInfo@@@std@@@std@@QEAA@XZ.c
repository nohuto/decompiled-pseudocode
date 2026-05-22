/*
 * XREFs of ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x180057D48
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005746C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x180057810 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 *     ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x1800F4660 (--_EMPCSixDofProcessor@@UEAAPEAXI@Z.c)
 *     _MPCRawInputProvider::InputReceivedStatic_::_1_::dtor$0 @ 0x180130AB1 (_MPCRawInputProvider--InputReceivedStatic_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = 1600 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 1600LL);
    if ( v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 += 39LL;
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x180057DC5LL);
      }
      v2 = v4;
    }
    operator delete(v2, (const struct std::nothrow_t *)v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
