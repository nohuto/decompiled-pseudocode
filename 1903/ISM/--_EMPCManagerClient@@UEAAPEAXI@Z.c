/*
 * XREFs of ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180110360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x18010FDD4 (--1MPCManagerClient@@UEAA@XZ.c)
 */

MPCManagerClient *__fastcall MPCManagerClient::`vector deleting destructor'(MPCManagerClient *this, char a2)
{
  MPCManagerClient::~MPCManagerClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x6F8);
  return this;
}
