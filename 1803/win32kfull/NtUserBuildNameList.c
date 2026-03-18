/*
 * XREFs of NtUserBuildNameList @ 0x1C00F9070
 * Callers:
 *     <none>
 * Callees:
 *     _BuildNameList @ 0x1C00F9164 (_BuildNameList.c)
 */

__int64 __fastcall NtUserBuildNameList(__int64 a1, unsigned int a2, _WORD *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  PVOID v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdx
  int v13; // ebx
  PVOID Object[7]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( a2 < 0xC )
  {
    v13 = -1073741816;
  }
  else
  {
    v12 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    ProbeForWrite(a3, a2, 4u);
    if ( a1 )
    {
      LOBYTE(v8) = 1;
      v13 = ValidateHwinsta(a1, v8, 1LL, Object);
      v9 = Object[0];
    }
    else
    {
      v13 = 0;
      v9 = 0LL;
      Object[0] = 0LL;
    }
    if ( v13 < 0 )
    {
      a3[4] = 0;
      *(_DWORD *)a3 = 1;
    }
    else
    {
      v13 = BuildNameList(v9, a3, a2, &v16);
      *a4 = v16;
      v9 = Object[0];
      if ( Object[0] )
        ObfDereferenceObject(Object[0]);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return (unsigned int)v13;
}
