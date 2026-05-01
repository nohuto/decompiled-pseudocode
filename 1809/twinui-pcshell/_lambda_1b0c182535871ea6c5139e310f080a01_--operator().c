/*
 * XREFs of _lambda_1b0c182535871ea6c5139e310f080a01_::operator() @ 0x180029CA0
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18002991C (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 * Callees:
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18002A100 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

void __fastcall lambda_1b0c182535871ea6c5139e310f080a01_::operator()(__int64 a1, __int64 a2)
{
  int PersistedData; // eax
  __int128 v4; // xmm0
  __int64 v5; // rdx
  unsigned int v6; // [rsp+20h] [rbp-38h]
  _BYTE v7[24]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  PersistedData = ApplicationViewManagement::CPersistence::_ReadPersistedData(
                    (ApplicationViewManagement::CPersistence *)(a2 + 40),
                    **(const unsigned __int16 ***)a1,
                    L"VirtualDesktop",
                    v7,
                    0x18u);
  if ( PersistedData < 0 )
  {
    v4 = *(_OWORD *)v7;
    goto LABEL_3;
  }
  if ( *(_DWORD *)v7 != 16 )
  {
    v5 = 61LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
      (const char *)0x8007000DLL,
      v6);
    return;
  }
  if ( *(_DWORD *)&v7[4] != 1447309360 )
  {
    v5 = 62LL;
    goto LABEL_9;
  }
  v4 = *(_OWORD *)&v7[8];
  PersistedData = 0;
LABEL_3:
  if ( PersistedData >= 0 )
    *(_OWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v4;
}
