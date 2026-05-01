/*
 * XREFs of ?CrmpActivityStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAG1W4_CRM_ACTIVITY_START_REASON@@@Z @ 0x1800021FC
 * Callers:
 *     CrmActivityStart @ 0x1800021E0 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall CrmpActivityStart(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  CLIENT_CALL_RETURN result; // rax

  result.Pointer = NdrClientCall3(
                     (MIDL_STUBLESS_PROXY_INFO *)&stru_180013BA0,
                     5u,
                     0LL,
                     *(_QWORD *)(a1 + 8),
                     *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
                     a2,
                     a3,
                     a4).Pointer;
  if ( a4 )
    return 0LL;
  return result;
}
