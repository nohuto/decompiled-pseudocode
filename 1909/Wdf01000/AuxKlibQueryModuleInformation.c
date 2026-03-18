/*
 * XREFs of AuxKlibQueryModuleInformation @ 0x1C00C9C2C
 * Callers:
 *     FxpGetImageBase @ 0x1C0095048 (FxpGetImageBase.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 */

unsigned int __fastcall AuxKlibQueryModuleInformation(unsigned int *BufferSize, unsigned int QueryInfo, char *a3)
{
  ULONG v5; // esi
  unsigned int result; // eax
  unsigned int v7; // edi
  _AUX_PROCESS_MODULES *p_StaticInfo; // rbx
  NTSTATUS v9; // eax
  int v10; // esi
  __int64 NumberOfModules; // rax
  unsigned int v12; // r8d
  char *v13; // rdx
  __int64 v14; // rcx
  _OWORD *v15; // rdx
  unsigned __int8 *FullPathName; // rax
  __int64 v17; // rcx
  unsigned int NeededSize; // [rsp+20h] [rbp-168h] BYREF
  _AUX_PROCESS_MODULES *ModuleInfo; // [rsp+28h] [rbp-160h]
  _AUX_PROCESS_MODULES StaticInfo; // [rsp+30h] [rbp-158h] BYREF

  v5 = 304;
  memset(&StaticInfo, 0, sizeof(StaticInfo));
  if ( AuxpInitState != 1 )
    return -1073741823;
  v7 = 0;
  if ( AuxpKlibFns.QueryModuleInformationPtr )
  {
    return AuxpKlibFns.QueryModuleInformationPtr(BufferSize, 0x110u, a3);
  }
  else
  {
    result = ((unsigned __int8)a3 & 7) != 0LL ? 0xC00000F1 : 0;
    if ( ((unsigned __int8)a3 & 7) == 0 )
    {
      p_StaticInfo = &StaticInfo;
      while ( 1 )
      {
        v9 = ZwQuerySystemInformation(SystemModuleInformation, p_StaticInfo, v5, &NeededSize);
        v10 = v9;
        if ( v9 >= 0 )
          break;
        if ( v9 != -1073741820 )
          goto $exit_failure;
        if ( p_StaticInfo != &StaticInfo )
          ExFreePoolWithTag(p_StaticInfo, 0);
        p_StaticInfo = (_AUX_PROCESS_MODULES *)ExAllocatePoolWithQuotaTag(PagedPool, NeededSize, 0x4B787541u);
        ModuleInfo = p_StaticInfo;
        if ( !p_StaticInfo )
          return -1073741670;
        v5 = NeededSize;
      }
      NumberOfModules = p_StaticInfo->NumberOfModules;
      if ( (unsigned __int64)(272 * NumberOfModules) <= 0xFFFFFFFF )
      {
        v12 = 272 * NumberOfModules;
        if ( a3 )
        {
          if ( *BufferSize >= v12 )
          {
            while ( v7 < p_StaticInfo->NumberOfModules )
            {
              v13 = &a3[272 * v7];
              v14 = v7;
              *(_QWORD *)v13 = p_StaticInfo->Modules[v14].ImageBase;
              *((_DWORD *)v13 + 2) = p_StaticInfo->Modules[v14].ImageSize;
              *((_WORD *)v13 + 6) = p_StaticInfo->Modules[v14].OffsetToFileName;
              v15 = v13 + 14;
              FullPathName = p_StaticInfo->Modules[v14].FullPathName;
              v17 = 2LL;
              do
              {
                *v15 = *(_OWORD *)FullPathName;
                v15[1] = *((_OWORD *)FullPathName + 1);
                v15[2] = *((_OWORD *)FullPathName + 2);
                v15[3] = *((_OWORD *)FullPathName + 3);
                v15[4] = *((_OWORD *)FullPathName + 4);
                v15[5] = *((_OWORD *)FullPathName + 5);
                v15[6] = *((_OWORD *)FullPathName + 6);
                v15 += 8;
                *(v15 - 1) = *((_OWORD *)FullPathName + 7);
                FullPathName += 128;
                --v17;
              }
              while ( v17 );
              ++v7;
            }
          }
          else
          {
            v10 = -1073741789;
          }
        }
        *BufferSize = v12;
      }
      else
      {
        v10 = -1073741675;
      }
$exit_failure:
      if ( p_StaticInfo != &StaticInfo )
        ExFreePoolWithTag(p_StaticInfo, 0);
      return v10;
    }
  }
  return result;
}
