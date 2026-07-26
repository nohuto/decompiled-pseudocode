/*
 * XREFs of ndisMNotifyMachineName @ 0x1C00BD150
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisMDoMiniportOp @ 0x1C00BD33C (ndisMDoMiniportOp.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4B40 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

void __fastcall ndisMNotifyMachineName(__int64 a1)
{
  int v1; // edi
  unsigned __int8 v2; // al
  __int64 v3; // rcx
  const wchar_t *i; // rax
  NTSTATUS v5; // eax
  HANDLE v6; // rcx
  __int64 v7; // rdx
  const wchar_t *v8; // rax
  int v9; // eax
  PVOID v10; // rbx
  __int64 v11; // [rsp+40h] [rbp+7h] BYREF
  const wchar_t *v12; // [rsp+48h] [rbp+Fh]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+17h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+67h] BYREF
  PVOID P; // [rsp+A8h] [rbp+6Fh] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 464) && (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
  {
    v2 = *(_BYTE *)(a1 + 32);
    if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 33) < 0x51u) && !RtlIsStateSeparationEnabled() )
    {
      v11 = 0LL;
      v12 = 0LL;
      v3 = 0x7FFFLL;
      for ( i = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters"; *i; ++i )
      {
        if ( !--v3 )
          return;
      }
      v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      ObjectAttributes.Length = 48;
      KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      LOWORD(v11) = 2 * (0x7FFF - v3);
      WORD1(v11) = v11 + 2;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v6 = KeyHandle;
      if ( !v5 )
      {
        P = 0LL;
        v11 = 0LL;
        v12 = 0LL;
        v7 = 0x7FFFLL;
        v8 = L"HostName";
        while ( *v8 )
        {
          ++v8;
          if ( !--v7 )
            goto LABEL_21;
        }
        v12 = L"HostName";
        LOWORD(v11) = 2 * (0x7FFF - v7);
        WORD1(v11) = v11 + 2;
        v9 = KRegKey::QueryValueString(&KeyHandle, &v11, &P);
        v10 = P;
        if ( !v9 )
          ndisMDoMiniportOp(v1, 0, 66074, *((_QWORD *)P + 1), *(unsigned __int16 *)P, 1, 0);
        if ( v10 )
          ExFreePoolWithTag(v10, 0x7274534Bu);
        v6 = KeyHandle;
      }
LABEL_21:
      if ( v6 )
        ZwClose(v6);
    }
  }
}
