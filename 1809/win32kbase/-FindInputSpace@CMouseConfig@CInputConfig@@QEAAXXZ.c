/*
 * XREFs of ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C003C484
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01533C8 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindInputSpace(CInputConfig::CMouseConfig *this, struct CEResource *a2)
{
  bool v3; // si
  CInputConfig *v4; // r14
  _QWORD **v5; // rdi
  CInputConfig *v6; // rdx
  _QWORD *i; // r8
  _QWORD **v8; // rcx
  char v9; // al
  char v10[8]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v11; // [rsp+28h] [rbp-20h]
  CInputConfig *v12; // [rsp+30h] [rbp-18h]
  _QWORD *v13; // [rsp+38h] [rbp-10h]

  *((_QWORD *)this + 1) = 0LL;
  v3 = !*(_DWORD *)this && !*((_DWORD *)this + 1);
  v4 = gpInputConfig;
  v5 = 0LL;
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v10, a2);
  v6 = *(CInputConfig **)v4;
  v11 = v4;
  for ( i = *(_QWORD **)v6; ; i = (_QWORD *)*i )
  {
    v8 = 0LL;
    v13 = i;
    v12 = v6;
    if ( v6 != v4 )
      v8 = (_QWORD **)((char *)v6 + 16);
    if ( !v8 )
      break;
    if ( v3 )
    {
      v9 = (_BYTE)v8[1] & 1;
    }
    else
    {
      if ( *(_DWORD *)this == *(_DWORD *)v8 && *((_DWORD *)this + 1) == *((_DWORD *)v8 + 1) )
      {
LABEL_11:
        *((_QWORD *)this + 1) = v8;
        break;
      }
      v9 = 0;
    }
    if ( v9 )
      goto LABEL_11;
    if ( ((_DWORD)v8[1] & 1) != 0 || !v5 )
      v5 = v8;
    v6 = (CInputConfig *)i;
  }
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v10);
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = v5;
    if ( !v5 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("There should always be a mouse input space");
      if ( !*((_QWORD *)this + 1) )
        *((_QWORD *)this + 1) = (char *)this + 16;
    }
  }
}
