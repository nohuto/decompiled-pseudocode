/*
 * XREFs of ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008F078
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C008F190 (ACPIGetPhysicalDeviceLocationBuffer.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocationPackage(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r12
  int v10; // ebx
  unsigned int i; // r14d
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  GUID *v27[5]; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v28[5]; // [rsp+50h] [rbp-41h] BYREF
  struct _STRING SourceString; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING StringIn; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v31[6]; // [rsp+98h] [rbp+7h] BYREF
  _DWORD *v32; // [rsp+F8h] [rbp+67h]

  memset(v31, 0, 0x28uLL);
  memset(v28, 0, sizeof(v28));
  memset(v27, 0, sizeof(v27));
  v9 = *(_DWORD **)(a1 + 32);
  v10 = 0;
  v32 = v9;
  if ( !*v9 )
  {
    v10 = -1073741823;
    goto LABEL_10;
  }
  if ( a2 || a3 )
  {
    v10 = AMLIEvalPkgDataElement(a1, 0, v31);
    if ( v10 >= 0 )
    {
      if ( !a2 || (v10 = ACPIGetPhysicalDeviceLocationBuffer(v31, a2), v10 >= 0) )
      {
        if ( a3 )
        {
          v6 = (_OWORD *)(a3 + 16);
          if ( a2 )
          {
            *v6 = *(_OWORD *)a2;
            *(_DWORD *)(a3 + 32) = *(_DWORD *)(a2 + 16);
          }
          else
          {
            v10 = ACPIGetPhysicalDeviceLocationBuffer(v31, v6);
            if ( v10 < 0 )
              goto LABEL_10;
          }
          if ( *v9 > 1u )
          {
            for ( i = 2; i - 1 < *v9; i += 2 )
            {
              if ( v28[4] )
              {
                AMLIFreeDataBuffs((__int64)v28, (__int64)v6, v7, v8);
                v28[4] = 0LL;
              }
              if ( v27[4] )
              {
                AMLIFreeDataBuffs((__int64)v27, (__int64)v6, v7, v8);
                v27[4] = 0LL;
              }
              v10 = AMLIEvalPkgDataElement(a1, i - 1, v28);
              if ( v10 < 0 )
                break;
              if ( WORD1(v28[0]) == 3 )
              {
                v7 = 16LL;
                if ( LODWORD(v28[3]) == 16 )
                {
                  v13 = (_QWORD *)v28[4];
                  v14 = *(_QWORD *)v28[4] - *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1;
                  if ( *(_QWORD *)v28[4] == *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1 )
                    v14 = *(_QWORD *)(v28[4] + 8LL) - *(_QWORD *)ACPI_PLD_JOINT_BUFFER_GUID.Data4;
                  if ( v14 )
                  {
                    v15 = *(_QWORD *)v28[4] - *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1;
                    if ( *(_QWORD *)v28[4] == *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1 )
                      v15 = *(_QWORD *)(v28[4] + 8LL) - *(_QWORD *)ACPI_PLD_SPATIAL_BUFFER_GUID.Data4;
                    if ( v15 )
                    {
                      v16 = *(_QWORD *)v28[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1;
                      if ( *(_QWORD *)v28[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1 )
                        v16 = *(_QWORD *)(v28[4] + 8LL) - *(_QWORD *)ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data4;
                      if ( v16 )
                      {
                        v18 = *(_QWORD *)v28[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                        if ( *(_QWORD *)v28[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                          v18 = *(_QWORD *)(v28[4] + 8LL)
                              - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                        if ( !v18 )
                          goto LABEL_74;
                        v19 = *(_QWORD *)v28[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                        if ( *(_QWORD *)v28[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                          v19 = *(_QWORD *)(v28[4] + 8LL)
                              - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                        if ( !v19 )
                          goto LABEL_74;
                        v20 = *(_QWORD *)v28[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                        if ( *(_QWORD *)v28[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                          v20 = *(_QWORD *)(v28[4] + 8LL)
                              - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                        if ( v20 )
                        {
                          v21 = *(_QWORD *)v28[4] - *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1;
                          if ( *(_QWORD *)v28[4] == *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1 )
                            v21 = *(_QWORD *)(v28[4] + 8LL) - *(_QWORD *)ACPI_PLD_CONTAINER_BUFFER_GUID.Data4;
                          if ( !v21 && LODWORD(v27[3]) >= 0x10 )
                          {
                            v22 = *(_QWORD *)(a3 + 136) - *(_QWORD *)&GUID_NULL.Data1;
                            if ( !v22 )
                              v22 = *(_QWORD *)(a3 + 144) - *(_QWORD *)GUID_NULL.Data4;
                            if ( !v22 )
                              *(GUID *)(a3 + 136) = *v27[4];
                          }
                        }
                        else
                        {
LABEL_74:
                          if ( !*(_QWORD *)(a3 + 128) )
                          {
                            v10 = AMLIEvalPkgDataElement(a1, i, v27);
                            if ( v10 < 0 )
                              break;
                            if ( WORD1(v27[0]) == 3 )
                            {
                              v23 = *v13 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                              if ( *v13 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                                v23 = v13[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                              if ( v23 )
                              {
                                v25 = *v13 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                                if ( *v13 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                                  v25 = v13[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                                if ( v25 )
                                {
                                  v26 = *v13 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                                  if ( *v13 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                                    v26 = v13[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                                  if ( !v26 && LODWORD(v27[3]) >= 0x10 )
                                  {
                                    v24 = RtlStringFromGUID(v27[4], (PUNICODE_STRING)(a3 + 120));
LABEL_98:
                                    v10 = v24;
                                    if ( v24 < 0 )
                                      break;
                                  }
                                }
                                else
                                {
                                  v7 = 16LL;
                                  if ( LODWORD(v27[3]) >= 0x10 )
                                  {
                                    v8 = 2LL;
                                    v6 = 0LL;
                                    StringIn.Buffer = (wchar_t *)v27[4];
                                    StringIn.Length = 0;
                                    StringIn.MaximumLength = 16;
                                    do
                                    {
                                      if ( !*((_WORD *)&v27[4]->Data1 + ((unsigned __int64)(unsigned __int16)v6 >> 1)) )
                                        break;
                                      LOWORD(v6) = (_WORD)v6 + 2;
                                      StringIn.Length = (unsigned __int16)v6;
                                    }
                                    while ( (unsigned __int16)v6 < 0x10u );
                                    if ( (_WORD)v6 )
                                    {
                                      v24 = RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(a3 + 120));
                                      goto LABEL_98;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                v7 = 16LL;
                                if ( LODWORD(v27[3]) >= 0x10 )
                                {
                                  v6 = 0LL;
                                  SourceString.Buffer = (char *)v27[4];
                                  SourceString.Length = 0;
                                  SourceString.MaximumLength = 16;
                                  do
                                  {
                                    if ( !*((_BYTE *)&v27[4]->Data1 + (unsigned __int16)v6) )
                                      break;
                                    LOWORD(v6) = (_WORD)v6 + 1;
                                    SourceString.Length = (unsigned __int16)v6;
                                  }
                                  while ( (unsigned __int16)v6 < 0x10u );
                                  v9 = v32;
                                  if ( (_WORD)v6 )
                                  {
                                    v24 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)(a3 + 120), &SourceString, 1u);
                                    goto LABEL_98;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        v17 = *(_QWORD *)(a3 + 104) - *(_QWORD *)&GUID_NULL.Data1;
                        if ( !v17 )
                          v17 = *(_QWORD *)(a3 + 112) - *(_QWORD *)GUID_NULL.Data4;
                        if ( !v17 )
                        {
                          v10 = AMLIEvalPkgDataElement(a1, i, v27);
                          if ( v10 < 0 )
                            break;
                          if ( WORD1(v27[0]) == 3 && LODWORD(v27[3]) >= 0x10 )
                            *(GUID *)(a3 + 104) = *v27[4];
                        }
                      }
                    }
                    else if ( (*(_BYTE *)(a3 + 52) & 0x1F) == 0 )
                    {
                      v10 = AMLIEvalPkgDataElement(a1, i, v27);
                      if ( v10 < 0 )
                        break;
                      if ( WORD1(v27[0]) == 3 && LODWORD(v27[3]) >= 0x10 )
                        *(GUID *)(a3 + 52) = *v27[4];
                    }
                  }
                  else if ( (*(_BYTE *)(a3 + 36) & 0x1F) == 0 )
                  {
                    v10 = AMLIEvalPkgDataElement(a1, i, v27);
                    if ( v10 < 0 )
                      break;
                    if ( WORD1(v27[0]) == 3 && LODWORD(v27[3]) >= 0x10 )
                      *(GUID *)(a3 + 36) = *v27[4];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_10:
  if ( v31[4] )
    AMLIFreeDataBuffs((__int64)v31, (__int64)v6, v7, v8);
  if ( v28[4] )
    AMLIFreeDataBuffs((__int64)v28, (__int64)v6, v7, v8);
  if ( v27[4] )
    AMLIFreeDataBuffs((__int64)v27, (__int64)v6, v7, v8);
  return (unsigned int)v10;
}
