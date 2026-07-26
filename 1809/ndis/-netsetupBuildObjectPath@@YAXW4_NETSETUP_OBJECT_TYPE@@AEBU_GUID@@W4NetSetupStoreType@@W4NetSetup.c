/*
 * XREFs of ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0
 * Callers:
 *     _lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator() @ 0x1C00B32B4 (_lambda_07fad1521ccbf9dcf92f4e848ce013d0_--operator().c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00C57C0 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C00C8244 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00CEEB8 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C01063C0 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C0106590 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0106700 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0106FA8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x1C001CB1C (netsetupGetPathForObjectType.c)
 */

int __fastcall netsetupBuildObjectPath(int a1, unsigned int *a2, int a3, int a4, wchar_t *Dst)
{
  const wchar_t *v5; // rax
  int v7; // r9d
  const wchar_t *v8; // r12
  int v9; // ebx
  int v10; // edi
  int v11; // esi
  int v12; // ebp
  int v13; // r14d
  int v14; // r15d
  const wchar_t *PathForObjectType; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r10d
  int v19; // r11d
  int v20; // r9d
  int v21; // r9d

  LODWORD(v5) = (_DWORD)P;
  if ( *((_BYTE *)P + 96) )
  {
    LODWORD(v5) = 1;
    if ( a4 == 3 )
      a3 = 1;
  }
  if ( a4 )
  {
    v7 = a4 - 1;
    if ( v7 )
    {
      v20 = v7 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
            v8 = L"\\Keywords";
          else
            v8 = 0LL;
        }
        else
        {
          v5 = L"\\CachedRuntimeProperties";
          v8 = L"\\Kernel";
          if ( a3 )
            v8 = L"\\CachedRuntimeProperties";
        }
      }
      else
      {
        v8 = L"\\Kernel";
      }
    }
    else
    {
      v8 = L"\\Properties";
    }
  }
  else
  {
    v8 = (const wchar_t *)&unk_1C008968C;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
      LODWORD(v5) = swprintf_s(
                      Dst,
                      0x100uLL,
                      L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}%ws",
                      *a2,
                      *((unsigned __int16 *)a2 + 2),
                      *((unsigned __int16 *)a2 + 3),
                      *((unsigned __int8 *)a2 + 8),
                      *((unsigned __int8 *)a2 + 9),
                      *((unsigned __int8 *)a2 + 10),
                      *((unsigned __int8 *)a2 + 11),
                      *((unsigned __int8 *)a2 + 12),
                      *((unsigned __int8 *)a2 + 13),
                      *((unsigned __int8 *)a2 + 14),
                      *((unsigned __int8 *)a2 + 15),
                      v8);
  }
  else
  {
    v9 = *((unsigned __int8 *)a2 + 11);
    v10 = *((unsigned __int8 *)a2 + 10);
    v11 = *((unsigned __int8 *)a2 + 9);
    v12 = *((unsigned __int8 *)a2 + 8);
    v13 = *((unsigned __int16 *)a2 + 3);
    v14 = *((unsigned __int16 *)a2 + 2);
    PathForObjectType = netsetupGetPathForObjectType(a1);
    LODWORD(v5) = swprintf_s(
                    Dst,
                    0x100uLL,
                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws\\{%08x-%04x-%04x-%02x%02"
                     "x-%02x%02x%02x%02x%02x%02x}%ws",
                    PathForObjectType,
                    *a2,
                    v14,
                    v13,
                    v12,
                    v11,
                    v10,
                    v9,
                    v19,
                    v18,
                    v17,
                    v16,
                    v8);
  }
  return (int)v5;
}
