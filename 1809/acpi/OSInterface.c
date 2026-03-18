/*
 * XREFs of OSInterface @ 0x1C00249C0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _stricmp_0 @ 0x1C0030BA7 (_stricmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OSInterface(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // esi
  const char **v6; // r14
  unsigned int v7; // ebx
  const char *v8; // r15
  bool v10; // al
  bool v11; // cf
  _QWORD v12[18]; // [rsp+20h] [rbp-79h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v12[0] = "Windows 2000";
  v12[1] = "Windows 2001";
  v12[2] = "Windows 2001 SP1";
  v12[3] = "Windows 2001.1";
  v12[4] = "Windows 2001 SP2";
  v12[5] = "Windows 2001.1 SP1";
  v12[6] = "Windows 2006";
  v12[7] = "Windows 2006 SP1";
  v12[8] = "Windows 2006.1";
  v12[9] = "Windows 2009";
  v12[10] = "Windows 2012";
  v12[11] = "Windows 2013";
  v12[12] = "Windows 2015";
  v12[13] = "Windows 2016";
  v12[14] = "Windows 2017";
  v12[15] = "Windows 2017.2";
  v12[16] = "Windows 2018";
  v12[17] = "Windows 2018.2";
  v5 = ValidateArgTypes(a1, v3, 0, "A");
  if ( !v5 )
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, "Z");
    if ( !v5 )
    {
      v6 = (const char **)v12;
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      v7 = 0;
      v8 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) + 32LL);
      while ( stricmp_0(*v6, v8) )
      {
        ++v7;
        ++v6;
        if ( v7 >= 0x12 )
          goto LABEL_6;
      }
      v10 = IsCompatableDSDTRevision();
      v5 = 0;
      v11 = gdwHighestOSVerQueried < v7;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v10 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      if ( v11 )
        gdwHighestOSVerQueried = v7;
LABEL_6:
      if ( ghCheckOsiString && (int)ghCheckOsiString(v8) >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                                 + 0xFFFFFFFF;
        return 0;
      }
    }
  }
  return v5;
}
