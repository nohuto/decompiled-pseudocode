/*
 * XREFs of ndisMNotifyMachineName @ 0x1C0108884
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisMDoMiniportOp @ 0x1C0108AA8 (ndisMDoMiniportOp.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108DB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

void __fastcall ndisMNotifyMachineName(__int64 a1)
{
  int v1; // r14d
  unsigned __int8 v2; // al
  const wchar_t *v3; // rax
  HANDLE v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int16 v7; // ax
  NTSTATUS v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  unsigned int v12; // eax
  __int16 v13; // si
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v15; // [rsp+48h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v18; // [rsp+B8h] [rbp+38h] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 464) && (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
  {
    v2 = *(_BYTE *)(a1 + 32);
    if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 33) < 0x51u) && !RtlIsStateSeparationEnabled() )
    {
      KeyHandle = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      v4 = 0LL;
      v5 = 0x7FFFLL;
      do
      {
        if ( !*v3 )
          break;
        ++v3;
        --v5;
      }
      while ( v5 );
      v6 = v5 == 0 ? 0xC000000D : 0;
      if ( v5 )
        v7 = 0x7FFF - v5;
      else
        v7 = 0;
      if ( v5 )
      {
        v15 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
        LOWORD(v14) = 2 * v7;
        WORD1(v14) = 2 * v7 + 2;
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
        v4 = KeyHandle;
        v6 = v8;
      }
      if ( !v6 )
      {
        v9 = 0LL;
        v14 = 0LL;
        v15 = 0LL;
        v10 = 0x7FFFLL;
        v11 = L"HostName";
        v18 = 0LL;
        do
        {
          if ( !*v11 )
            break;
          ++v11;
          --v10;
        }
        while ( v10 );
        v12 = v10 == 0 ? 0xC000000D : 0;
        if ( v10 )
          v13 = 0x7FFF - v10;
        else
          v13 = 0;
        if ( v10 )
        {
          v15 = L"HostName";
          LOWORD(v14) = 2 * v13;
          WORD1(v14) = 2 * v13 + 2;
          v12 = KRegKey::QueryValueString(&KeyHandle, &v14, &v18);
          v4 = KeyHandle;
          v9 = v18;
        }
        if ( !v12 )
          ndisMDoMiniportOp(v1, 0, 66074, v9[1], *(unsigned __int16 *)v9, 1, 0);
        if ( v9 )
          ExFreePoolWithTag(v9, 0x7274534Bu);
      }
      if ( v4 )
        ZwClose(v4);
    }
  }
}
