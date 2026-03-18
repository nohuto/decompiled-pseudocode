/*
 * XREFs of OSInterface @ 0x1C001EF70
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _stricmp_0 @ 0x1C0031827 (_stricmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OSInterface(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // esi
  const char **v6; // r14
  unsigned int v7; // ebx
  const char *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v18; // al
  bool v19; // cf
  _QWORD v20[20]; // [rsp+20h] [rbp-89h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v20[0] = "Windows 2000";
  v20[1] = "Windows 2001";
  v20[2] = "Windows 2001 SP1";
  v20[3] = "Windows 2001.1";
  v20[4] = "Windows 2001 SP2";
  v20[5] = "Windows 2001.1 SP1";
  v20[6] = "Windows 2006";
  v20[7] = "Windows 2006 SP1";
  v20[8] = "Windows 2006.1";
  v20[9] = "Windows 2009";
  v20[10] = "Windows 2012";
  v20[11] = "Windows 2013";
  v20[12] = "Windows 2015";
  v20[13] = "Windows 2016";
  v20[14] = "Windows 2017";
  v20[15] = "Windows 2017.2";
  v20[16] = "Windows 2018";
  v20[17] = "Windows 2018.2";
  v20[18] = "Windows 2019";
  v5 = ValidateArgTypes(a1, v3, 0, "A");
  if ( !v5 )
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, "Z");
    if ( !v5 )
    {
      v6 = (const char **)v20;
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      v7 = 0;
      v8 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) + 32LL);
      while ( stricmp_0(*v6, v8) )
      {
        ++v7;
        ++v6;
        if ( v7 >= 0x13 )
          goto LABEL_6;
      }
      v18 = IsCompatableDSDTRevision(v10, v9, v11, v12);
      v5 = 0;
      v19 = gdwHighestOSVerQueried < v7;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)(v18 != 0) & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      if ( v19 )
        gdwHighestOSVerQueried = v7;
LABEL_6:
      if ( ghCheckOsiString && (int)ghCheckOsiString(v8) >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision(
                                                                                  v14,
                                                                                  v13,
                                                                                  v15,
                                                                                  v16) != 0) & 0xFFFFFFFF00000000uLL)
                                                 + 0xFFFFFFFF;
        return 0;
      }
    }
  }
  return v5;
}
