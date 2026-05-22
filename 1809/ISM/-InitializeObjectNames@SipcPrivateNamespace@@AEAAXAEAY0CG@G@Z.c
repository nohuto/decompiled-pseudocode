/*
 * XREFs of ?InitializeObjectNames@SipcPrivateNamespace@@AEAAXAEAY0CG@G@Z @ 0x1800A190C
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x18009FE08 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 *     ??$swprintf_s@$0DD@@@YAHAEAY0DD@GPEBGZZ @ 0x1800A24C0 (--$swprintf_s@$0DD@@@YAHAEAY0DD@GPEBGZZ.c)
 */

void __fastcall SipcPrivateNamespace::InitializeObjectNames(SipcPrivateNamespace *this, unsigned __int16 (*a2)[38])
{
  unsigned __int16 *v4; // rdx
  unsigned __int64 v5; // r8
  unsigned int v6; // ecx
  wil::details::in1diag0 *v7; // rcx

  *(_QWORD *)a2 = SipcPrivateNamespace::NamespacePrefix;
  (*a2)[4] = 95;
  v4 = &(*a2)[5];
  v5 = 0LL;
  do
  {
    v6 = *((unsigned __int8 *)this + v5++ + 8);
    *v4 = a0123456789abcd_0[(unsigned __int64)v6 >> 4];
    v4 += 2;
    *(v4 - 1) = a0123456789abcd_0[v6 & 0xF];
  }
  while ( v5 < 0x10 );
  *v4 = 0;
  if ( (int)swprintf_s<51>((char *)this + 160, L"%s\\%s", a2, L"ClientSignal") <= 0
    || (int)swprintf_s<51>((char *)this + 262, L"%s\\%s", a2, L"ServerSignal") <= 0 )
  {
    wil::details::in1diag0::FailFast_Unexpected(v7);
    JUMPOUT(0x1800A19CFLL);
  }
}
