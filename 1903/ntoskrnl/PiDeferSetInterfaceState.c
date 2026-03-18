/*
 * XREFs of PiDeferSetInterfaceState @ 0x14073193C
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopAllocateUnicodeString @ 0x1407320B0 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PiDeferSetInterfaceState(__int64 a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v5; // rdi
  int UnicodeString; // ebx
  UNICODE_STRING **v7; // rcx

  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20207050u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    UnicodeString = IopAllocateUnicodeString(&PoolWithTag[1], a2->Length);
    if ( UnicodeString < 0 )
    {
      UnicodeString = -1073741670;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      RtlCopyUnicodeString(v5 + 1, a2);
      v7 = *(UNICODE_STRING ***)(a1 + 616);
      if ( *v7 != (UNICODE_STRING *)(a1 + 608) )
        __fastfail(3u);
      *(_QWORD *)&v5->Length = a1 + 608;
      v5->Buffer = (wchar_t *)v7;
      *v7 = v5;
      *(_QWORD *)(a1 + 616) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)UnicodeString;
}
