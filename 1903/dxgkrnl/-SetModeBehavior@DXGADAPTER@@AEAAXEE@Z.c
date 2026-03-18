/*
 * XREFs of ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C017DF2C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C015AE24 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C017DFB8 (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

void __fastcall DXGADAPTER::SetModeBehavior(DXGADAPTER *this, __int64 a2, char a3)
{
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // [rsp+20h] [rbp-79h] BYREF
  struct _UNICODE_STRING v11; // [rsp+28h] [rbp-71h] BYREF
  struct _UNICODE_STRING v12; // [rsp+38h] [rbp-61h] BYREF
  _DXGKARG_CONTROLMODEBEHAVIOR v13; // [rsp+48h] [rbp-51h] BYREF
  __int128 v14; // [rsp+58h] [rbp-41h] BYREF
  int v15; // [rsp+68h] [rbp-31h]
  _OWORD v16[6]; // [rsp+70h] [rbp-29h] BYREF
  wchar_t v17; // [rsp+D0h] [rbp+37h]

  v3 = 0;
  *(_QWORD *)&v13.Request.0 = 0LL;
  v13.NotSatisfied.Value = 0;
  if ( a3 )
  {
    v16[0] = *(_OWORD *)L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v17 = aRegistryMachin[48];
    v16[2] = *(_OWORD *)L"e\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v16[1] = *(_OWORD *)L"y\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v12.Buffer = (wchar_t *)v16;
    v16[4] = *(_OWORD *)L"soft\\Windows\\DWM";
    v15 = *(_DWORD *)L"r";
    v16[3] = *(_OWORD *)L"RE\\Microsoft\\Windows\\DWM";
    v14 = *(_OWORD *)L"HighColor";
    *(_QWORD *)&v12.Length = 6422624LL;
    v16[5] = *(_OWORD *)L"dows\\DWM";
    *(_QWORD *)&v11.Length = 1310738LL;
    v11.Buffer = (wchar_t *)&v14;
    if ( (int)ReadRegistryDwordKeyValue(&v12, &v11, &v10) >= 0 )
    {
      LOBYTE(v3) = v10 != 0;
      v13.Request.Value = v3 | v13.Request.Value & 0xFFFFFFFE;
    }
  }
  else
  {
    v13.Request.Value = 1;
  }
  v6 = (int)DXGADAPTER::DdiControlModeBehavior(this, &v13);
  v8 = (unsigned int)v6 + 0x80000000;
  if ( (int)v8 >= 0 && (_DWORD)v6 != -1073741637 )
  {
    v9 = WdLogNewEntry5_WdError(v8, v5, v7);
    *(_QWORD *)(v9 + 24) = v6;
    WdLogEvent5_WdError(v9);
  }
}
