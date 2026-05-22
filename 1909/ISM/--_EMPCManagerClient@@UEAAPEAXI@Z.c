/*
 * XREFs of ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180110140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x18010FBA0 (--1MPCManagerClient@@UEAA@XZ.c)
 */

MPCManagerClient *__fastcall MPCManagerClient::`vector deleting destructor'(MPCManagerClient *this, volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  MPCManagerClient::~MPCManagerClient(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x6F8);
  return this;
}
