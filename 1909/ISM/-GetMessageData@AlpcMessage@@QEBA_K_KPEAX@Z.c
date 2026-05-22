/*
 * XREFs of ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800D5964
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4500 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D59E0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

size_t __fastcall AlpcMessage::GetMessageData(AlpcMessage *this, size_t a2, char *a3)
{
  size_t v3; // rdi
  size_t v4; // rbx

  v3 = *(__int16 *)this;
  v4 = a2;
  if ( *(__int16 *)this < 0 )
    v3 = 0LL;
  if ( v3 < a2 )
    v4 = v3;
  memcpy_0(a3, (char *)this + 40, v4);
  memset_0(&a3[v4], 0, a2 - v4);
  return v3;
}
