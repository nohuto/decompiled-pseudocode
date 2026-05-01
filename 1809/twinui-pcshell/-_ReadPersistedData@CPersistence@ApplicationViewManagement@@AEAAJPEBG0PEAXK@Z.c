/*
 * XREFs of ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18002A100
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___ @ 0x180029668 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_0067f30f54eb0de3635ee.c)
 *     _lambda_1b0c182535871ea6c5139e310f080a01_::operator() @ 0x180029CA0 (_lambda_1b0c182535871ea6c5139e310f080a01_--operator().c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x180051D18 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E7180 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::_ReadPersistedData(
        HKEY *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        void *a4,
        DWORD a5)
{
  HKEY v5; // rcx
  unsigned int v6; // ebx
  unsigned int ValueW; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = *this;
  if ( !v5 )
  {
    v9 = -2144927145;
    v10 = 113LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)v9,
      v11);
    return v9;
  }
  v6 = a5;
  v13 = a5;
  ValueW = RegGetValueW(v5, a2, a3, 8u, 0LL, a4, &v13);
  if ( ValueW == 2 )
    return 2147942402LL;
  if ( ValueW )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x7F,
             (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
             (const char *)ValueW,
             v11);
  if ( v6 != v13 )
  {
    v9 = -2147024883;
    v10 = 129LL;
    goto LABEL_6;
  }
  return 0LL;
}
