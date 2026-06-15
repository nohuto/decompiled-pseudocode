/*
 * XREFs of ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800263AC
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001BEC0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x18001D4C0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CDF8 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x18002785C (-AddHead@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z.c)
 *     pow @ 0x1800350A8 (pow.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdScreenReaderStateChanged(DWORD a1, unsigned int a2, int a3, float a4, int *a5)
{
  float v5; // xmm7_4
  unsigned int v9; // edi
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  int *v11; // r13
  int v12; // r14d
  int v13; // eax
  struct TSSession *v14; // rbx
  float v15; // xmm9_4
  __int64 **v16; // r9
  __int64 *i; // r8
  float v18; // xmm6_4
  float v19; // xmm1_4
  __int64 *v20; // rax
  __int64 *v21; // rax
  bool v22; // zf
  __int64 result; // rax
  ATL::CAtlException *v24; // rbx
  struct TSSession *v25; // [rsp+30h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  ATL::CAtlException *v28; // [rsp+48h] [rbp-60h] BYREF

  v27 = -2LL;
  v5 = a4;
  v9 = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v26 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = a5;
  *a5 = 0;
  v12 = 1;
  v13 = TsSessionFromSessionId(a1, 1, 0LL, &v25);
  if ( v13 )
  {
    v9 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v9 = v13;
    goto LABEL_32;
  }
  v14 = v25;
  v15 = *((float *)v25 + 56);
  v16 = (__int64 **)((char *)v25 + 176);
  for ( i = (__int64 *)*((_QWORD *)v25 + 22); i && *((_DWORD *)i + 4) != a2; i = (__int64 *)*i )
    ;
  if ( !a3 )
  {
    if ( i )
    {
      v20 = (__int64 *)*i;
      if ( i == *v16 )
        *v16 = v20;
      else
        *(_QWORD *)i[1] = v20;
      v21 = (__int64 *)i[1];
      if ( i == v16[1] )
        v16[1] = v21;
      else
        *(_QWORD *)(*i + 8) = v21;
      *i = (__int64)v16[4];
      v16[4] = i;
      v22 = v16[2] == (__int64 *)1;
      v16[2] = (__int64 *)((char *)v16[2] - 1);
      if ( v22 )
        ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v16);
    }
    if ( !*((_QWORD *)v14 + 24) )
      *((_DWORD *)v14 + 56) = 1065353216;
    goto LABEL_29;
  }
  if ( !i )
  {
    try
    {
      v9 = 0;
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead((char *)v25 + 176, a2);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v24 = v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        _o__resetstkoflw();
      v9 = *(_DWORD *)v24;
      v10 = v26;
      if ( *(int *)v24 >= 0 )
      {
        v12 = 1;
        v11 = a5;
        v5 = a4;
        v14 = v25;
        goto LABEL_13;
      }
LABEL_32:
      if ( v10 )
        LeaveCriticalSection(v10);
      result = v9;
    }
  }
LABEL_13:
  v18 = pow(10.0, 0.0);
  if ( v5 <= v18 )
    v18 = v5;
  v19 = pow(10.0, -1.2);
  if ( v19 <= v18 )
    v19 = v18;
  *((float *)v14 + 56) = v19;
LABEL_29:
  if ( v15 == *((float *)v14 + 56) )
    v12 = 0;
  *v11 = v12;
  goto LABEL_32;
}
