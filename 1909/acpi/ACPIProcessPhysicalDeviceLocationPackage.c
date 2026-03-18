/*
 * XREFs of ACPIProcessPhysicalDeviceLocationPackage @ 0x1C0091DA8
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0097100 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C00932E8 (ACPIGetPhysicalDeviceLocationBuffer.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocationPackage(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // r12
  int v7; // ebx
  _OWORD *v8; // rdx
  unsigned int i; // r14d
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  NTSTATUS v23; // eax
  __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // rax
  GUID *v27[5]; // [rsp+28h] [rbp-69h] BYREF
  struct _STRING SourceString; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING StringIn; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v30[5]; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v31[6]; // [rsp+98h] [rbp+7h] BYREF
  _DWORD *v32; // [rsp+F8h] [rbp+67h]

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&StringIn.Length = 0LL;
  StringIn.Buffer = 0LL;
  memset(v31, 0, 0x28uLL);
  memset(v30, 0, sizeof(v30));
  memset(v27, 0, sizeof(v27));
  v6 = *(_DWORD **)(a1 + 32);
  v7 = 0;
  v32 = v6;
  if ( !*v6 )
  {
    v7 = -1073741823;
    goto LABEL_10;
  }
  if ( a2 || a3 )
  {
    v7 = AMLIEvalPkgDataElement(a1, 0, v31);
    if ( v7 >= 0 )
    {
      if ( !a2 || (v7 = ACPIGetPhysicalDeviceLocationBuffer(v31, a2), v7 >= 0) )
      {
        if ( a3 )
        {
          v8 = (_OWORD *)(a3 + 16);
          if ( a2 )
          {
            *v8 = *(_OWORD *)a2;
            *(_DWORD *)(a3 + 32) = *(_DWORD *)(a2 + 16);
          }
          else
          {
            v7 = ACPIGetPhysicalDeviceLocationBuffer(v31, v8);
            if ( v7 < 0 )
              goto LABEL_10;
          }
          if ( *v6 > 1u )
          {
            for ( i = 2; i - 1 < *v6; i += 2 )
            {
              if ( v30[4] )
              {
                AMLIFreeDataBuffs(v30);
                v30[4] = 0LL;
              }
              if ( v27[4] )
              {
                AMLIFreeDataBuffs(v27);
                v27[4] = 0LL;
              }
              v7 = AMLIEvalPkgDataElement(a1, i - 1, v30);
              if ( v7 < 0 )
                break;
              if ( WORD1(v30[0]) == 3 && LODWORD(v30[3]) == 16 )
              {
                v11 = (_QWORD *)v30[4];
                v12 = *(_QWORD *)v30[4] - *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1;
                if ( *(_QWORD *)v30[4] == *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1 )
                  v12 = *(_QWORD *)(v30[4] + 8LL) - *(_QWORD *)ACPI_PLD_JOINT_BUFFER_GUID.Data4;
                if ( v12 )
                {
                  v13 = *(_QWORD *)v30[4] - *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1;
                  if ( *(_QWORD *)v30[4] == *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1 )
                    v13 = *(_QWORD *)(v30[4] + 8LL) - *(_QWORD *)ACPI_PLD_SPATIAL_BUFFER_GUID.Data4;
                  if ( v13 )
                  {
                    v14 = *(_QWORD *)v30[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1;
                    if ( *(_QWORD *)v30[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1 )
                      v14 = *(_QWORD *)(v30[4] + 8LL) - *(_QWORD *)ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data4;
                    if ( v14 )
                    {
                      v16 = *(_QWORD *)v30[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                      if ( *(_QWORD *)v30[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                        v16 = *(_QWORD *)(v30[4] + 8LL) - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                      if ( !v16 )
                        goto LABEL_74;
                      v17 = *(_QWORD *)v30[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                      if ( *(_QWORD *)v30[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                        v17 = *(_QWORD *)(v30[4] + 8LL)
                            - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                      if ( !v17 )
                        goto LABEL_74;
                      v18 = *(_QWORD *)v30[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                      if ( *(_QWORD *)v30[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                        v18 = *(_QWORD *)(v30[4] + 8LL) - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                      if ( v18 )
                      {
                        v19 = *(_QWORD *)v30[4] - *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1;
                        if ( *(_QWORD *)v30[4] == *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1 )
                          v19 = *(_QWORD *)(v30[4] + 8LL) - *(_QWORD *)ACPI_PLD_CONTAINER_BUFFER_GUID.Data4;
                        if ( !v19 && LODWORD(v27[3]) >= 0x10 )
                        {
                          v20 = *(_QWORD *)(a3 + 136) - *(_QWORD *)&GUID_NULL.Data1;
                          if ( !v20 )
                            v20 = *(_QWORD *)(a3 + 144) - *(_QWORD *)GUID_NULL.Data4;
                          if ( !v20 )
                            *(GUID *)(a3 + 136) = *v27[4];
                        }
                      }
                      else
                      {
LABEL_74:
                        if ( !*(_QWORD *)(a3 + 128) )
                        {
                          v7 = AMLIEvalPkgDataElement(a1, i, v27);
                          if ( v7 < 0 )
                            break;
                          if ( WORD1(v27[0]) == 3 )
                          {
                            v21 = *v11 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                            if ( *v11 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                              v21 = v11[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                            if ( v21 )
                            {
                              v24 = *v11 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                              if ( *v11 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                                v24 = v11[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                              if ( v24 )
                              {
                                v26 = *v11 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                                if ( *v11 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                                  v26 = v11[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                                if ( !v26 && LODWORD(v27[3]) >= 0x10 )
                                {
                                  v23 = RtlStringFromGUID(v27[4], (PUNICODE_STRING)(a3 + 120));
LABEL_98:
                                  v7 = v23;
                                  if ( v23 < 0 )
                                    break;
                                }
                              }
                              else if ( LODWORD(v27[3]) >= 0x10 )
                              {
                                v25 = 0;
                                StringIn.Buffer = (wchar_t *)v27[4];
                                StringIn.Length = 0;
                                StringIn.MaximumLength = 16;
                                do
                                {
                                  if ( !*((_WORD *)&v27[4]->Data1 + ((unsigned __int64)v25 >> 1)) )
                                    break;
                                  v25 += 2;
                                  StringIn.Length = v25;
                                }
                                while ( v25 < 0x10u );
                                if ( v25 )
                                {
                                  v23 = RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(a3 + 120));
                                  goto LABEL_98;
                                }
                              }
                            }
                            else if ( LODWORD(v27[3]) >= 0x10 )
                            {
                              v22 = 0;
                              SourceString.Buffer = (char *)v27[4];
                              SourceString.Length = 0;
                              SourceString.MaximumLength = 16;
                              do
                              {
                                if ( !*((_BYTE *)&v27[4]->Data1 + v22) )
                                  break;
                                SourceString.Length = ++v22;
                              }
                              while ( v22 < 0x10u );
                              v6 = v32;
                              if ( v22 )
                              {
                                v23 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)(a3 + 120), &SourceString, 1u);
                                goto LABEL_98;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)(a3 + 104) - *(_QWORD *)&GUID_NULL.Data1;
                      if ( !v15 )
                        v15 = *(_QWORD *)(a3 + 112) - *(_QWORD *)GUID_NULL.Data4;
                      if ( !v15 )
                      {
                        v7 = AMLIEvalPkgDataElement(a1, i, v27);
                        if ( v7 < 0 )
                          break;
                        if ( WORD1(v27[0]) == 3 && LODWORD(v27[3]) >= 0x10 )
                          *(GUID *)(a3 + 104) = *v27[4];
                      }
                    }
                  }
                  else if ( (*(_BYTE *)(a3 + 52) & 0x1F) == 0 )
                  {
                    v7 = AMLIEvalPkgDataElement(a1, i, v27);
                    if ( v7 < 0 )
                      break;
                    if ( WORD1(v27[0]) == 3 && LODWORD(v27[3]) >= 0x10 )
                      *(GUID *)(a3 + 52) = *v27[4];
                  }
                }
                else if ( (*(_BYTE *)(a3 + 36) & 0x1F) == 0 )
                {
                  v7 = AMLIEvalPkgDataElement(a1, i, v27);
                  if ( v7 < 0 )
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
LABEL_10:
  if ( v31[4] )
    AMLIFreeDataBuffs(v31);
  if ( v30[4] )
    AMLIFreeDataBuffs(v30);
  if ( v27[4] )
    AMLIFreeDataBuffs(v27);
  return (unsigned int)v7;
}
