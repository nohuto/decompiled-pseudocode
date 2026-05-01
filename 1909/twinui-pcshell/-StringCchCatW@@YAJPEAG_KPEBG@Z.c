/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180122D88
 * Callers:
 *     ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x180217ABC (-EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z.c)
 *     ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z @ 0x180429818 (-Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z.c)
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z @ 0x18042A540 (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PE.c)
 *     ?Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z @ 0x18042C8E8 (-Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoTh.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18003AA60 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  signed int v3; // r9d
  __int64 v5; // rcx
  unsigned __int16 *i; // rax
  __int64 v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
    goto LABEL_9;
  v5 = a2;
  for ( i = a1; v5; --v5 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v3 = v5 == 0 ? 0x80070057 : 0;
  if ( v5 )
    v7 = a2 - v5;
  else
LABEL_9:
    v7 = 0LL;
  if ( v3 >= 0 )
    return (unsigned int)StringCopyWorkerW(&a1[v7], a2 - v7, a3, (STRSAFE_PCNZWCH)a3, v9);
  return (unsigned int)v3;
}
